#include<stdio.h>
int main()
{
    int i,n,t=0;
    scanf("%d",&n);
    int s[n],f[3]={0,0,0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==1)
            f[0]++;
        else if(s[i]==2)
            f[1]++;
        else
            f[2]++;
    }
    for(i=1;;i++)
    {
        if(f[0]>=i && f[1]>=i && f[2]>=i)
            continue;
        else
            break;
    }
    t=i-1;
    if(t==0)
    {
        printf("%d",t);
    }
    else
    {
        int j,a[t][3];
        for(i=0;i<t;i++)
        {
            for(j=0;j<n;j++)
            {
              if(s[j]==1)
              {
                  a[i][]
                  break;
              }
            }
            for(j=0;j<n;j++)
            {
              if(s[j]==2)
              {
                  printf("%d ",j+1);
                  break;
              }
            }
            for(j=0;j<n;j++)
            {
              if(s[j]==3)
              {
                  printf("%d ",j+1);
                  break;
              }
            }
            printf("\n");
        }
    }
    return 0;
}
