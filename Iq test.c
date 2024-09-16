#include<stdio.h>
int main()
{
    int i,n,a=0,b=0;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        if(c[i]%2==0)
        {
            a++;
        }
        else
            b++;
    }
    if(a>b)
    {
        for(i=0;i<n;i++)
        {
            if(c[i]%2!=0)
                printf("%d",i+1);
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(c[i]%2==0)
                printf("%d",i+1);
        }
    }
    return 0;
}
