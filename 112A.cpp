#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char a[100], b[100];
    int count = 0;
    scanf("%s", &a);
    scanf("%s", &b);

    for(int i= 0 ;i < 100 ; i++)
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            break;
        }
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        if(b[i] >= 'A' && b[i] <='Z')
        {
            b[i] = b[i] + 32;
        }
        if (a[i] > b[i]) { printf("1\n"); return 0; }
        if (a[i] < b[i]) { printf("-1\n"); return 0; }
    }
    
    printf("0\n");
    
    return 0;
}