#include<stdio.h>

int main()
{
    int a,b,c,d=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&b,&c);
        if(b<=c-2)
            d++;
    }
    printf("%d",d);
    return 0;
}
