#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n=0;
    scanf("%d", &n);
    int sumx = 0, sumy=0, sumz=0;
    for(int i=0;i<n;i++)
    {
        int x = 0, y = 0, z = 0;
        scanf("%d%d%d", &x,&y,&z);
        sumx = sumx + x;
        sumy = sumy + y;
        sumz = sumz + z;
    }
    if(sumx == 0 && sumy ==0 && sumz == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}