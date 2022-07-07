#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t = 0;
    scanf("%d", &t);

    for(int i=0; i<t ; i++)
    {
        int a=0, b=0, c=0, d=0, s=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if (b>a){
            s++;
        }
        if (c>a){
            s++;
        }
        if (d>a){
            s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
