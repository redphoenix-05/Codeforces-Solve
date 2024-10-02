#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int j,n,max;
        scanf("%d",&n);
        int a[n],b[n];
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&a[j],&b[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]<=10)
            {
                max=b[j];
                break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(b[j]>max && a[j]<=10)
            {
                max=b[j];
            }
        }
        for(j=0;j<n;j++)
        {
            if(b[j]==max)
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }
}
