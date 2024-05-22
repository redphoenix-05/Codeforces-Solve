#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    m=n=5;
    int i,j,a[m][n],r,c;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                r=abs(2-i);
                c=abs(2-j);
                printf("%d\n",r+c);
                break;
            }
        }
    }
    return 0;
}
