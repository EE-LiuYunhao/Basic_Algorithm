#include <iostream>
using namespace std;
//firstly use 10 as the radix
void radix_sort(int * arr, int len, int max_bit);
int num_bit(int num, int radix);

int main(int argc, char const *argv[])
{
  int len  = 0; int max_bit = 0;
  cout<<"Enter the number of inputs: ";
  cin>>len;
  int * arr = new int [len];
  for(int i=0; i<len; i++)
  {
    cin>>arr[i];
    int this_bit = num_bit(arr[i], 10);
    max_bit = this_bit>max_bit?this_bit:max_bit;
  }
  cout<<"The original list is: "<<endl;
  for(int i=0; i<len; i++)
  {
    cout<<arr[i]<<'\t';
  }
  cout<<endl;
  radix_sort(arr, len, max_bit);
  cout<<"The sorted list is: "<<endl;
  for(int i=0; i<len; i++)
  {
    cout<<arr[i]<<'\t';
  }
  cout<<endl;
  delete arr;
  return 0;
}

void radix_sort(int * arr, int len, int max_bit)
{
  //Interation w. r. t. the bits
  //With in each iteration, create a chaining hasing table
  //Link the elements in the arr to the hasing table
  //Concentrate the elements
}
int num_bit(int num, int radix)
{
  return 1;
}
