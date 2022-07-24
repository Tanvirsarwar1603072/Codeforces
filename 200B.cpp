#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a=0;
    float ans =0.0, sum=0.0;
    scanf("%d", &a);
    int arr[100];
    for(int i=0; i<a; i++)
    {
        int x =0;
        scanf("%d",&x);
        arr[i] = x;
        sum += arr[i];
    }
    
    a = a*100;
    ans = 100*(sum/a);
    printf("%f\n", ans);
}