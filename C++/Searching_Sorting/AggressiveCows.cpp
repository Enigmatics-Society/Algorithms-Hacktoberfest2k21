// SPOJ Problem - Aggressive Cows
#include<bits/stdc++.h>
using namespace std;

bool check(int arr[] , int mid , int C, int N)
{
int count = 1;
int lastplaced = 0;
for(int i=1;i<N;i++)
{
 if(arr[i]-arr[lastplaced] >= mid)
 {
    count ++;
    lastplaced = i;
 }
}
if(count >= C)
    return true;
else
    return false;}

int main()
{
int t; 
cin>>t;              // taking Testcases input
while (t--)
{

int N,C;
cin>>N>>C;         // taking N and C as Input

int a[N];
for(int i=0;i<N;i++)
{
    cin>>a[i];          //taking positions as input
}

sort(a,a+N);             //sorting the array containing the N positions

int dis;                //storing the max possible distance

int low = a[0];                 // min dis on which we can place cows
int high =  a[N-1] - 1;       // max dis at which we can place cows (if there are two cows only)
 
while(low<=high)
{int mid = (low + high)/2;


if(check(a,mid,C,N))        // checking whether the mid is acceptable dis or not
{ 
     dis = mid;            // if mid is acceptable then the dis = mid and we further check for values greater than mid
     low =  mid + 1; 

}
else
{
    high = mid - 1;       // if the mid is not acceptable then how can the values greater then mid are acceptable
}
}

cout<<dis<<"\n";
}

return 0;
}