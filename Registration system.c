#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,b,a=0;
    scanf("%d",&n);
    struct string
    {
        char str[33];
    }s[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].str);
    }
    for(i=0;i<n-1;i++)
    {
        if(i==0)
        {
            printf("OK\n");
        }
        for(j=n-1;j>0;j--)
        {
            b=strcmp(s[i].str,s[j].str)
            if(b==0)
        }
    }
}
