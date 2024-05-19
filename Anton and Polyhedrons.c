#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,f,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[15];
        scanf("%s",str);
        if(str[0]=='T')
        {
            a=a+4;
        }
        else if(str[0]=='C')
        {
            a=a+6;
        }
        else if(str[0]=='O')
        {
            a=a+8;
        }
        else if(str[0]=='D')
        {
            a=a+12;
        }
        else
        {
            a=a+20;
        }
    }
    printf("%d\n",a);
    return 0;
}
