//program to find shorter angle between hands of a clock at any given time.
#include <stdio.h>
#include <math.h>
int main()
{
    int in;
    scanf("%d", &in);
    for (int i = 0; i < in; i++)
    {
        int a, b, c;
        scanf("%d %d", &a, &b);
        c = abs((11 * b - 60 * a) / 2);
        if (c > 180)
        {
            printf("%d\n", 360 - c);
        }
        else
        {
            printf("%d\n", c);
        }
    }
}
