#include<stdio.h>
int main()
{
    int i,a,n,k;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        a=n%10;
        if(a==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
    }
    printf("%d",n);
    return 0;
}
