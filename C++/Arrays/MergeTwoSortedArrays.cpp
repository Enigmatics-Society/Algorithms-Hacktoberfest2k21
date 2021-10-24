//Merge Two Sorted Arrays Without extra space in O(nlog(n) + mlog(m))
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n , m, gap;
    cin >> n >> m;
    
    int arr1[n], arr2[m];
    
    for(int i = 0 ; i < n ; i++)
        cin >> arr1[i];
        
    for(int i = 0 ; i < m ; i++)
        cin >> arr2[i];
        
    
    for(int i = n-1,j = 0; i >= 0 && j < m ; i--, j++ ){
          if(arr2[j] < arr1[i])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        } 
   
   
   
    sort(arr2 , arr2 + m);
    sort(arr1 , arr1 + n);
    
        
    for(int i = 0 ; i < n ; i++)
        cout << arr1[i] << " ";
    
    for(int i = 0 ; i < m ; i++)
        cout << arr2[i] << " ";

    
    
    return 0;
}