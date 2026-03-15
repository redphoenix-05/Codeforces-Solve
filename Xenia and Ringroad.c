#include<stdio.h>
int main()
{
    long long int n,m,i,t=0,b;
    scanf("%lld%lld",&n,&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        if(a[i]<a[i-1] && i!=0)
        {
            t=t+n-a[i-1]+a[i];
        }
        else
        {
            if(i==0)
                b=a[i]-1;
            else
                b=a[i]-a[i-1];
            t=t+b;
        }
    }
    printf("%lld\n",t);
    return 0;
}
