def count_sort(lst,ran):
    #implement count_sort
    count = []
    result = []
    for i in range(ran):
        count.append(0)
    for i in range(len(lst)):
        count[lst[i]] = 1
        result.append(0)
    for i in range(2, ran):
        count[i] += count[i-1]
    for i in range(len(lst)):
        result[count[lst[i]-1]]=lst[i]
    return result
def main():
    a = int(input("Enter the number of inputs: "))
    lst = []
    max = 0;
    for i in range(a):
        j = int(input())
        lst.append(j)
        if j>max:
            max = j
    print("Original list: "+str(lst)+" with maximum: "+str(max))
    result = count_sort(lst,max+1)
    result.remove(0)
    print("Sorted list:  ", result)
main()
