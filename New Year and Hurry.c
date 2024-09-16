#include<stdio.h>
int main()
{
    int i,n,k,m=240,b=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        k=k+5*i;
        if(k<=m)
        {
            b++;
        }
        else
            break;
    }
    printf("%d\n",b);
    return 0;
}
