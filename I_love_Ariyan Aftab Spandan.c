#include<stdio.h>
int main()
{
    int i,n,b=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            b++;
        }
        else if(a[i]<min)
        {
            min=a[i];
            b++;
        }
    }
    printf("%d",b);
    return 0;
}
