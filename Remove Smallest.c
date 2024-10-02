#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,j,k,temp;
        scanf("%d",&m);
        int a[m];
        for(j=0;j<m;j++)
            scanf("%d",&a[j]);
        for(j=0;j<m-1;j++)
        {
            for(k=j+1;k<m;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[k];
                    a[k]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(j=1;j<m;j++)
        {
            if((a[j]-a[j-1])<=1)
            {
                if(j==m-1)
                    printf("YES\n");
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
        if(m==1)
        {
            printf("YES\n");
        }
    }
}
