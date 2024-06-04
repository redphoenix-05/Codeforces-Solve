#include<stdio.h>
int main()
{
    int n,m,a,b,c,d,r;
    double e;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    e=(b*1.00)/m;
    if(e>a)
    {
        d=n*a;
        printf("%d\n",d);
    }
    else if(n%m==0)
    {
        d=(n/m)*b;
        printf("%d\n",d);
    }
    else
    {
        d=(n/m);
        r=n-(d*m);
        c=d*b+r*a;
        d=((n/m)+1)*b;
        if(d<c)
        printf("%d\n",d);
        else
        printf("%d\n",c);
    }
    return 0;
}
