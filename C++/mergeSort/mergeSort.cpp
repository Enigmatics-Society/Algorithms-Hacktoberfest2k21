/*This program sort the given string using merge sort*/
/*Author: Akshant chaudhary*/

#include<iostream>
using namespace std;
#define MAX 100//Size of array

void mergeSort(int arr[],int low,int up);//This is a recursive function of merge sort
void merge(int arr[],int merged_arr[],int low1,int up1,int low2,int up2); //This function merge two sorted arrays
void copy(int arr[],int merged_arr[],int low,int up);//This function Copy elements to the original array

int main()
{
    int arr[MAX];//Deceleration of variables
    int length;

    cout<<"Enter length of the array:";
    cin>>length;

    //Taking input
    cout<<"Enter the elements of the array:";
    for(int i=0;i<length;i++)
        cin>>arr[i];

    mergeSort(arr,0,length-1);//invoking merge sort

    //Displaying output
    cout<<"Array in sorted order:";
    for(int i=0;i<length;i++)
        cout<<arr[i]<<" ";
}

void mergeSort(int arr[],int low,int up)
{
    int mid;
    int merged_arr[MAX];

    if(low==up)
        return;

    mid = (low+up)/2;//stores the index of middle element of the array

    mergeSort(arr,low,mid);//Invoking merge sort for left sublist
    mergeSort(arr,mid+1,up);//Invoking merge sort for right sublist
    merge(arr,merged_arr,low,mid,mid+1,up);//Invoking merge function to merge left and right sublist
    copy(arr,merged_arr,low,up);//Copy temp to original array
}
void merge(int arr[],int merged_arr[],int low1,int up1,int low2,int up2)
{
    int i = low1;//i is initialized to starting index of left sublist
    int j = low2;//j is initialized to starting index of right sublist
    int k = low1;//k is initialized to starting index of merged_arr

    while(i<=up1 && j<=up2)
    {
        //Element which is smaller between left and right sublist is inserted into merged_arr
        if(arr[i]<=arr[j])
            merged_arr[k++] = arr[i++];
        else
            merged_arr[k++] = arr[j++];
    }

    while(i<=up1)//Inserting remaining elements of left sublist into merged_arr
        merged_arr[k++] = arr[i++];

    while(j<=up2)//Inserting remaining elements of right sublist into merged_arr
        merged_arr[k++] = arr[j++];
}
void copy(int arr[],int merged_arr[],int low,int up)
{
    //copying elements of merged_arr to arr
    for(int i=low;i<=up;i++)
        arr[i] = merged_arr[i];
}

