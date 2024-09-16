#include<stdio.h>
int main()
{
    int i,n,h,m,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&h,&m);
        if(h==23)
        {
            printf("%d\n",60-m);
        }
        else
        {
            d=(23-h)*60+(60-m);
            printf("%d\n",d);
        }
    }
    return 0;
}
