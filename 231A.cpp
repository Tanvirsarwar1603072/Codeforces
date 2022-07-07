#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n=0, s = 0;
    scanf("%d",&n);
    if(n>0){
    for(int i=0; i<n; i++)
    {
        int a=0, b=0, c=0;
        scanf("%d%d%d",&a,&b,&c);

        if(a+b+c >=2){
            s++;
        }
        else{
            continue;
        }
    }
    printf("%d\n", s);
    return 0;
}}
