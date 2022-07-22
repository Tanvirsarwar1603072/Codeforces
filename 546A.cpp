#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int sum=0,k=0,w=0,i,n = 0;
    scanf("%d%d%d", &k,&w,&n);
    for(i=1; i<=n; i++)
    {
        sum = sum + k*i;
    }
    if(sum <= w)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", sum-w);
    }
    return 0;
}