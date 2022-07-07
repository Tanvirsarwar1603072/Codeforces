#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n=0;
    scanf("%d",&n);

    if(n>2 && n%2 == 0 && n<=100){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
