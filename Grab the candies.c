#include<stdio.h>

int main()
{
    int i,n,m,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        int mihai=0,bianca=0;
        int a[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==0)
            {
                mihai+=a[j];
            }
            else
            {
                bianca+=a[j];
            }
        }
        if(mihai>bianca)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
