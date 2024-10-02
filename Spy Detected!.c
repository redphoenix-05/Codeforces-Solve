#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int b[n],j,k;
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        for(j=0;j<n-1;j++)
        {
            if(b[j]!=b[j+1])
            {
                if(b[j]==b[j+2] || b[j]==b[j-1])
                {
                    a[i]=j+2;
                }
                else
                    a[i]=j+1;

            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
