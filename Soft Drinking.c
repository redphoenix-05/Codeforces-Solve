#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int a,b,e;
    a=p/(np*n);
    b=(k*l)/(nl*n);
    e=(c*d)/n;
    if(a<=b&&a<=e)
        printf("%d\n",a);
    else if(b<=a && b<=e)
        printf("%d\n",b);
    else
        printf("%d\n",e);
}
