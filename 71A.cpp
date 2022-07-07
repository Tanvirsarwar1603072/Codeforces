#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main()
{
    int n=0;
    scanf("%d",&n);
    if(n > 0 && n <= 100)
    {
    for(int i=0; i<n ; i++)
    {
        char s[100];
        scanf("%s", &s);

        int j = 0, m = 0;
        while(s[j] != '\0'){
            if (s[j] != ' '){
                m++;
            }
            j++;
        }

        if(m > 10){
            printf("%c", s[0]);
            printf("%d", m-2);
            printf("%c\n", s[m-1]);
        }
        else{
            printf("%s\n", s);
        }

    }
    }
    return 0;
}