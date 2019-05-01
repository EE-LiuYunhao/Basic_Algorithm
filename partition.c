#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
void quick_sort(int * arr, int sta, int end);
void get_input(int * arr, int len);
void output_list(int * arr, int len);

int main(int argc, char const *argv[])
{
  int len = 0;
  printf("Enter the length:\n");
  scanf("%d\n", &len);
  int * lst = (int *)malloc(len*sizeof(int));
  get_input(lst, len);
  printf("Origin list\n");
  output_list(lst,len);
  quick_sort(lst, 0, len);
  output_list(lst,len);
  free(lst);
  return 0;
}

void get_input(int *arr, int len)
{
  printf("Please input %d distinct integers\n", len);
  for(int i=0; i<len; i++)
  {
    scanf("%d\n", arr+i);
  }
}

void quick_sort(int * arr, int sta, int end)
{
  int q = sta; //pick the first as the pivot
  int i = sta-1; int j = end;
  int pivot = arr[q];
  while(1)
  {
    do{i=i+1;} while(arr[i]<pivot);//as long as the next element is less than pivot, just ignore it so that it is left right
    do{j=j-1;} while(arr[j]>pivot);//as long as the prev element is more than pivot, just ignore it so that it is left left
    if(i<j) swap(arr+i, arr+j);
    else
    {
      q = j;
      break;
    }
  }
  printf("Divide at %d: %d\n", q, arr[q]);
}

void output_list(int * arr, int len)
{
  for(int i=0; i<len; i++)
  {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}
