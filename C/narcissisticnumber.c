//An n-digit number that is the sum of the nth powers of its digits is called a n-narcissistic number.
#include <stdio.h>
#include <math.h>
int fun()
{
    int num, count = 0, a;
    scanf("%d", &num);
    a = num;
    while (a > 0)
    {
        a /= 10;
        count++;
    }
    int arr[count], b, sum = 0;
    b = num;
    for (int i = 0; i < count; i++)
    {
        arr[i] = b % 10;
        b /= 10;
        sum += pow(arr[i], count);
    }
    int out;
    if (num == sum)
    {
        out = 1;
    }
    else
    {
        out = 0;
    }
    return out;
}
int main()
{
    int input;
    scanf("%d", &input);
    int arr[input];
    for (int i = 0; i < input; i++)
    {
        arr[i] = fun();
    }
    for (int i = 0; i < input; i++)
    {
        if (arr[i] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
