#include<stdio.h>

int main()
{
    int l,level;
    scanf("%d",&l);
    level=l;
    int m,n,k;
    scanf("%d",&m);
    int a[m],i,j=0,p=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    k=m+n;
    int c[k];
    for(i=0;i<k;i++)
    {
        if(i<m)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[j];
            j++;
            if(j==n)
                break;
        }
    }
    for(i=0;i<k;i++)
    {
        if(l==c[i])
        {
            l--;
            p++;
            i=-1;
        }
    }
    if(level==p)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
