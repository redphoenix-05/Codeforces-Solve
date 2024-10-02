#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],j=0,s=0,d=0,t;
    t=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[j]<a[t])
            {
                s=s+a[t];
                t--;
            }
            else
            {
                s=s+a[j];
                j++;
            }
        }
        else
        {
            if(a[j]<a[t])
            {
                d=d+a[t];
                t--;
            }
            else
            {
                d=d+a[j];
                j++;
            }
        }
    }
    printf("%d %d",s,d);
    return 0;
}
