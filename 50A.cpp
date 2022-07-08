#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m=0, n=0;

    scanf("%d%d", &m, &n);

    if(m <= n && n <= 16 && m >= 1)
    {
        int k = 0, s = 0;
        s = m * n;
        if(s % 2 == 0)
        {
            k = s / 2;
        }
        else
        {
            k = (s-1) / 2;
        }

        printf("%d\n", k);
    }
    return 0;
}