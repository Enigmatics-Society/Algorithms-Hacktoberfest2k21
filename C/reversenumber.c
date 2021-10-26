//program to reverse a number.
#include <stdio.h>
int main()
{
  long int i;
  int j[7],k;
  scanf("%d",&i);
  for(k=0;k<7;k++)
  {
    if(i!=0){

    j[k]=i%10;
    i/=10;
    printf("%d",j[k]);
    }
    else
        break;

  }

  return 0;
}
