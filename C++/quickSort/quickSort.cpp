/*This program sort the given integers using quick sort*/
/*Author: Akshant chaudhary*/

#include<iostream>
using namespace std;
#define MAX 100//Size of array

void quickSort(int arr[],int low,int up);//This is a recursive function for quick sort
int partition(int arr[],int low,int up);//This function places the pivot at its proper position and returns its index

int main()
{
   int arr[MAX],num;//Variables deceleration
   cout<<"Enter the number of elements:";
   cin>>num;
   //Take integers as inputs and stores them in arr
   for(int i=0;i<num;i++)
   {
       cout<<"Enter the element:";
       cin>>arr[i];
   }
   quickSort(arr,0,num-1);//Invoking quick sort
   //Displaying output
   cout<<"Sorted array is:";
   for(int i=0;i<num;i++)
        cout<<arr[i]<<" ";
}

int partition(int arr[],int low,int up)
{
    int pivot = arr[up],temp;
    int i = (low - 1); // Index of smaller element
    for (int j = low; j <= up - 1; j++)
    {
        if (arr[j] < pivot)// If current element is smaller than the pivot
        {
            i++; // increment index of smaller element
            //swap arr[i] and arr[j] using temp
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    //swap arr[i + 1] and arr[up] using temp
    temp= arr[i+1];
    arr[i+1]=arr[up];
    arr[up]=temp;
    return (i + 1);//return the index of proper position of pivot
}
void quickSort(int arr[],int low,int up)
{
    int p;//Stores index of pivot which partition function returns
    if(low>=up)
        return;
    p=partition(arr,low,up);//Invoking partition function
    quickSort(arr,low,p-1);//Invoking quick sort for element smaller than pivot
    quickSort(arr,p+1,up);//Invoking quick sort for element greater than pivot
}

