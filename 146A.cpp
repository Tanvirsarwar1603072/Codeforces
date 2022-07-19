#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char si[100];
    int count = 0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z = 0;
    scanf("%s", &si);
    //printf("%s\n", si);

    int ci = 0;
    while(si[ci] != '\0')
    {
        //printf("Hi!\n");
        if(a == 0 && si[ci] == 'a')
        {
            a++;
            //printf("Hi!\n");
            count++;
            continue;
        }
        if(b == 0 && si[ci] == 'b')
        {
            b++;
            count++;
            continue;
        }
        if(c == 0 && si[ci] == 'c')
        {
            c++;
            count++;
            continue;
        }
        if(d == 0 && si[ci] == 'd')
        {
            d++;
            count++;
            continue;
        }
        if(e == 0 && si[ci] == 'e')
        {
            e++;
            count++;
            continue;
        }
        if(f == 0 && si[ci] == 'f')
        {
            f++;
            count++;
            continue;
        }
        if(g == 0 && si[ci] == 'g')
        {
            g++;
            count++;
            continue;
        }
        if(h == 0 && si[ci] == 'h')
        {
            h++;
            count++;
            continue;
        }
        if(i == 0 && si[ci] == 'i')
        {
            i++;
            count++;
            continue;
        }
        if(j == 0 && si[ci] == 'j')
        {
            j++;
            count++;
            continue;
        }
        if(k == 0 && si[ci] == 'k')
        {
            k++;
            count++;
            continue;
        }
        if(l == 0 && si[ci] == 'l')
        {
            l++;
            count++;
            continue;
        }
        if(m == 0 && si[ci] == 'm')
        {
            m++;
            count++;
            continue;
        }
        if(n == 0 && si[ci] == 'n')
        {
            n++;
            count++;
            continue;
        }
        if(o == 0 && si[ci] == 'o')
        {
            o++;
            count++;
            continue;
        }
        if(p == 0 && si[ci] == 'p')
        {
            p++;
            count++;
            continue;
        }
        if(q == 0 && si[ci] == 'q')
        {
            q++;
            count++;
            continue;
        }
        if(r == 0 && si[ci] == 'r')
        {
            r++;
            count++;
            continue;
        }
        if(s == 0 && si[ci] == 's')
        {
            s++;
            count++;
            continue;
        }
        if(t == 0 && si[ci] == 't')
        {
            t++;
            count++;
            continue;
        }
        if(u == 0 && si[ci] == 'u')
        {
            u++;
            count++;
            continue;
        }
        if(v == 0 && si[ci] == 'v')
        {
            v++;
            count++;
            continue;
        }
        if(w == 0 && si[ci] == 'w')
        {
            w++;
            count++;
            continue;
        }
        if(x == 0 && si[ci] == 'x')
        {
            x++;
            count++;
            continue;
        }
        if(y == 0 && si[ci] == 'y')
        {
            y++;
            count++;
            continue;
        }
        if(z == 0 && si[ci] == 'z')
        {
            z++;
            count++;
            continue;
        }
        ci++;
    }
    //printf("%d\n", count);
    
    if(count%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}