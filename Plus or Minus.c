#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c)
            printf("+\n");
        else
            printf("-\n");
    }
    return 0;
}
