//Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n,sum=0;
        scanf("%d",&n);
        for (int i = 1; i <= n/2; i++)
        {
            if (n%i==0)
            {
                sum+=i;
            } 
        }
        if (sum==n)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}
