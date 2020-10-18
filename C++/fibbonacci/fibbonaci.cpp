#include<iostream>    
using namespace std;      
void Fibonacci(int n)
{    
    static int num1=0, num2=1, num3;    
    if(n>0)
	{    
         num3 = num1 + num2;    
         num1 = num2;    
         num2 = num3;    
         cout<<num3<<" ";    
         Fibonacci(n-1);    
    }    
}    
int main()
{    
    int n;    
    cout<<"Please Enter the number of elements you want to print : ";    
    cin>>n;    
    cout<<"Series are : ";    
    cout<<"0 "<<"1 ";  
    Fibonacci(n-2);   
     return 0;  
} 

