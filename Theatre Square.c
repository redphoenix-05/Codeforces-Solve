#include<stdio.h>
int main()
{
    long long n,m,a,b,c;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(m%a==0) b=m/a;
    else b=m/a+1;
    if(n%a==0) c=n/a;
    else c=n/a+1;
    printf("%lld",b*c);
    return 0;
}
