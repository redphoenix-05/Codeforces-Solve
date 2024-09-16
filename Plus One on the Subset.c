#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++)
    {
        int j,n,max,min;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0];
        min=a[0];
        for(j=1;j<n;j++)
        {
            if(a[j]>max)
                max=a[j];
            if(a[j]<min)
                min=a[j];
        }
        s[i]=max-min;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
