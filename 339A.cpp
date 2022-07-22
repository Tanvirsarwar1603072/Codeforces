#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char a[100], temp[100];
    int x=0,y=0,z=0;
    scanf("%s", &a);

    for(int i=0; i<99; i = i+1)
    {
        if(a[i] == '\0') { break; }
        if(a[i] == '1')
        {
            x++;
        }
        if(a[i] == '2')
        {
            y++;
        }
        if(a[i] == '3')
        {
            z++;
        }
    }

    while(x > 0)
    {
        if(x == 1 && y == 0 && z == 0)
        {
            printf("1\n");
            break;
        }
        else
        {
            printf("1+");
            x--;
        }
    }
    while(y > 0)
    {
        
        if(y == 1 && z == 0)
        {
            printf("2\n");
            break;
        }
        else
        {
            printf("2+");
            y--;
        }
    }
    while(z > 0)
    {
        if(z==1){
            printf("3\n");
            break;
        }
        else
        {
            printf("3+");
            z--;
        }
    }

    //printf("%s\n", a);
    return 0;

}