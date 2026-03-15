#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
        int a,b,d;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            d=a-b;
        }
        else
        {
            d=b-a;
        }
        if(d%10==0)
        {
            p[i]=d/10;
        }
        else
        {
            p[i]=(d/10)+1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
