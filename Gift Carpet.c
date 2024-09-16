#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int m,n,j,k;
        scanf("%d%d",&m,&n);
        char s[m][n];
        for(j=1;j<=m;j++)
        {
            for(k=1;k<=n;k++)
            {
                scanf("%c",&s[j][k]);
            }
        }
        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                printf("%c",s[j][k]);
            }
            printf("\n");
        }
    }
}
