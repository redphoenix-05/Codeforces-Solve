#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++)
    {
        char str[7],a=0,b=0,n;
        int j;
        scanf("%s",str);
        for(j=0;j<3;j++)
        {
            n=str[j]-48;
            a=a+n;
        }
        for(j=3;j<6;j++)
        {
            n=str[j]-48;
            b=b+n;
        }
        if(a==b)
            c[i]=1;
        else
            c[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(c[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
