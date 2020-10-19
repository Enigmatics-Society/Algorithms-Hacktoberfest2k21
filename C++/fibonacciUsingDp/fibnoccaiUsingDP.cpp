//Fibonacci series using dynamic programming
//Author: Akshant chaudhary

#include<iostream>
using namespace std;

int main ()
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  int fib[num+1];
  int i;

  fib[0] = 0;
  fib[1] = 1;

  for (i = 2;i <= num;i++)
      fib[i] = fib[i-1] + fib[i-2];

  cout<<"Series is:";

  for(int i = 0;i<num;i++)
    cout<<fib[i]<<" ";

  return 0;
}
