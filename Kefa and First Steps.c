#include<stdio.h>
int main()
{
    int i,n,b=1,j=0,max=0,k;
    scanf("%d",&n);
    int a[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
            b++;
        else
        {
            if(b>1)
            {
                c[j]=b;
                j++;
                b=1;
            }
        }
    }
    for(k=0;k<j;k++)
    {
        if(c[k]>max)
        {
            max=c[k];
        }
    }
    if(b==1 && (n==1 || max==0))
        printf("%d\n",b);
    else if(b==1 && n>1)
        printf("%d\n",max);
    else if(b>max)
        printf("%d\n",b);
    else
        printf("%d\n",max);
    return 0;
}
