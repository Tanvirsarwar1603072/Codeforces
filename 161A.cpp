#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int c = 0, l=0,m=0;
    char s[5][5];

    for(int i=0; i<5; i++)
    {
        //printf("Hi %d\n", i);'''
        for(int j=0; j<5; j++)
        {
            //printf("Hello %d\n", j);''
            scanf("%s", &s[i][j]);
            if(s[i][j] == '1')
            {
                l = i;
                m = j;
                break;
            }
        }
    }
    if(l >= 2)
    {
        c = l - 2;
    }
    else
    {
        c = 2 - l;
    }
    if(m >= 2)
    {
        c = c + (m - 2);
    }
    else
    {
        c = c + (2 - m);
    }
    printf("%d\n", c);
    //printf("l = %d, m = %d\n", l, m);
}