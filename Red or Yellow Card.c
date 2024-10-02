#include<stdio.h>
int main()
{
    int a,c,n,q,i;
    scanf("%d %d",&n,&q);
    int b[n+1];
    for(i=0;i<n+1;i++)
    {
        b[i]=0;
    }
    for(i=0;i<q;i++)
    {
        scanf("%d %d",&a,&c);
        if(a==3)
        {
            if(b[c]>1)
            {
                printf("Yes\n");
            }
            else printf("No\n");
        }
        else if(a==2)
        {
            b[c]=2;
        }
        else
        {
            b[c]++;
        }
    }
}
