#include<stdio.h>

int main()
{
    long long n,k,j;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
    {
        if(k<=(n/2))
        {
            j= 2*k-1 ;
            printf("%lld",j);
        }
        else
        {
            j=2*(k-(n/2));
            printf("%lld",j);
        }
    }
    else
    {
        if(k<=((n/2)+1))
        {
            j= 2*k-1 ;
            printf("%lld",j);
        }
        else
        {
            j=2*(k-((n/2)+1));
            printf("%lld",j);
        }
    }
}
