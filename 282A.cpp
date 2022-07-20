#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n=0, x=0;
    scanf("%d", &n);

    if(n >= 1 && n <= 150)
    {
        for(int i=0; i<n ; i++){
            char s[4];
            scanf("%s", &s);

            if (s[1] == '+')
            {
                x = x +  1;
            }
            else
            {
                x = x - 1;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}