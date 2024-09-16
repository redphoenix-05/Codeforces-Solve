#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,a[100],m,n,o,x,b;
    m='H';
    n='Q';
    o='9';
    scanf("%s",str);
    b=strlen(str);
    for(i=0;i<b;i++)
    {
        a[i]=str[i];
    }
    for(i=0;i<b;i++)
    {
        if(a[i]==m || a[i]==n || a[i]==o)
        {
            printf("YES\n");
            break;
        }
        else
        {
            if(i+1==b)
                printf("NO\n");
        }
    }
    return 0;
}
