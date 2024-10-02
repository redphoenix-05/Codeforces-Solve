#include<stdio.h>
int main()
{
    int i,n,a,b,c,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if( (a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1) )
        {
            j++;
        }

    }
    printf("%d",j);
    return 0;
}
