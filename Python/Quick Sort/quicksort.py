#Program for QUICK SORT
# Author : Jaswinder Singh 


#function for Partition
def partition(arr,low,high): 
    i = ( low-1 )         
    pivot = arr[high]     
  
    for j in range(low , high): 
  
        if   arr[j] < pivot: 
          
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 
  
    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return ( i+1 ) 

#Function for quicksort
def quickSort(arr,low,high): 
    if low < high: 
  
        pi = partition(arr,low,high) 
  
        quickSort(arr, low, pi-1) 
        quickSort(arr, pi+1, high) 


n = int(input("Enter no. of elements in array : "))

arr = []

print("Enter the elements of Series")

for i in range(0, n):
    ele = int(input())
    arr.append(ele)

print("BEFORE SORTING")
print(arr)
quickSort(arr,0,n-1);
print("AFTER SORTING")
print(arr)
