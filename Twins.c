#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp,sum=0,c=0,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        k=k+a[i];
        c++;
        if(k>(sum/2))
            break;
    }
    printf("%d\n",c);
    return 0;
}
