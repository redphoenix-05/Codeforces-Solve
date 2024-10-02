#include<stdio.h>
int main()
{
    int i,n,a,b,c,d,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        d=c/a;
        e=(d*a)+b;
        if(e<=c)
            printf("%d\n",e);
        else
        {
            e=((d-1)*a)+b;
            printf("%d\n",e);
        }
    }
    return 0;
}
