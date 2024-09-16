#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h[n],g[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&h[i],&g[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(h[i]==g[j])
            {
               c++;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
