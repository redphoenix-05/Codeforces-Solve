#include<stdio.h>

int main()
{
    int a,b,i,j=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=0;a%b!=0;a++,j++);
        printf("%d\n",j);
    }
    return 0;
}
