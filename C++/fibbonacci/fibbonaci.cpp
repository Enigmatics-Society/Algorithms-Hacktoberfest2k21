//Fibonnaci series using recursion
//Author: Nishant Sabbarwal

#include<iostream>    
using namespace std;      
void Fibonacci(int n)
{    
    static int no1=0, no2=1, no3;    
    if(n>0)
	{    
         no3 = no1 + no2;    
         no1 = no2;    
         no2 = no3;    
         cout<<no3<<" ";    
         Fibonacci(n-1);    
    }    
}    
int main()
{    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Series are : ";    
    cout<<"0 "<<"1 ";  
    Fibonacci(n-2);   
     return 0;  
} 


