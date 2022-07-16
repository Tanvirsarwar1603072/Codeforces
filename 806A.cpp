#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n > 0 && n <= 1000)
    {
        for (int j=0 ; j<n; j++)
        {
            char s[4];
            scanf("%s", &s);

            
                if(s[0] == 'y' || s[0] == 'Y')
                {
                    if(s[1] == 'e' || s[1] == 'E')
                    {
                        if(s[2] == 's' || s[2] == 'S')
                        {
                            printf("YES\n");
                        }
                        else
                        {
                            printf("NO\n");
                        }
                    }
                    else
                    {
                        printf("NO\n");
                    }
                }
                else
                {
                    printf("NO\n");
                }
            
        }
    }
    return 0;
}