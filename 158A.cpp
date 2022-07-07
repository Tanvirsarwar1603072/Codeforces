#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n=0, k=0, x=0, sum=0;
    scanf("%d%d", &n,&k);
    
    if(n>0 && k>0 && k <= n && n<=50){
    
        int a[n],m=0;

        for(int i=0; i<n; i++)
        {
            scanf("%d", &m);
            a[i] = m;
        }

        x = a[k-1];

        for(int i=0; i<n; i++)
        {
            if(a[i] >= x && a[i] > 0){
                sum++;
            }
        }

        printf("%d\n", sum);
    
    }
    
    return 0;
}