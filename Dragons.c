#include<stdio.h>

int main()
{
    int i,j,s,n,tem,cha;
    scanf("%d%d",&s,&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                tem=x[j];
                x[j]=x[i];
                x[i]=tem;
                cha=y[j];
                y[j]=y[i];
                y[i]=cha;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if (s>x[i])
        {
            s+=y[i];
            if(i+1==n)
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
            break;
        }
    }
}
