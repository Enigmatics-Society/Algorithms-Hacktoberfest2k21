#include<stdio.h>
#include<stdlib.h>

void merge_it(int arr[],int left,int mid,int end)
{
	int val1=mid-left+1;
	int val2=end-mid;
	int left_part[val1],right_part[val2];
	for(int i=0;i<val1;i++)
	{
		left_part[i]=arr[left+i];
	}
	for(int j=0;j<val2;j++)
	{
		right_part[j]=arr[mid+1+j];
	}
	int i=0;
	int j=0;
	int k=left;
	while(i<val1 && j<val2)
	{
		if(left_part[i]<=right_part[j])
		{
			arr[k]=left_part[i];
			i++;
		}
		else
		{
			arr[k]=right_part[j];
			j++;

		}
		k++;

	}

	while(i<val1)
	{
		arr[k]=left_part[i];
		i++;
		k++;
	}
	while(j<val2)
	{
		arr[k]=right_part[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=start+(end-start)/2;
		//left part
		merge_sort(arr,start,mid);
		//right part
		merge_sort(arr,mid+1,end);
		merge_it(arr,start,mid,end);

	}
}
int main()
{
	int arr[]={1,3,5,2,4,7,8,11};
	int n=8;
	 merge_sort(arr,0,n-1);
	 for(int i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 
}