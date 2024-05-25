#include<stdio.h>
int main()
{
    int i,j,n,b,tc;
    scanf("%d",&tc);
    for(j=1;j<=tc;j++)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==i+1)
            {
                b=1;
                break;
            }
            else
                b=0;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=i+1)
            {
                b=1;
                break;
            }
            else
                b=0;
        }
        if(b==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
