#include<stdio.h>
int main()
{
    int i,n,e;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0;i<n;i++)
    {
        e=0;
        if(a[i]<b[i])
            e++;
        if(a[i]<c[i])
            e++;
        if(a[i]<d[i])
            e++;
        printf("%d\n",e);
    }
    return 0;
}
