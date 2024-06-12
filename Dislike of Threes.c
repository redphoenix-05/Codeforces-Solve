#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        int j,n;
        scanf("%d",&n);
        for(j=1;;j++)
        {
            if(j%3==0 || j%10==3)
                continue;
            else
            {
                n--;
                if(n==0)
                {
                    a[i]=j;
                    break;
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
