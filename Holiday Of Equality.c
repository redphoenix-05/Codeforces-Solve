#include<stdio.h>
int main()
{
    int i,n,max,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+max-a[i];
    }
    printf("%d\n",sum);
    return 0;
}
