#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0,max=0;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum=sum+b-a;
        if(sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}
