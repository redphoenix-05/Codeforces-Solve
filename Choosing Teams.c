#include<stdio.h>
int main()
{
    int n,k,i,j,c=0,d;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if((a[i]+k)<=5)
            c++;
    }
    d=c/3;
    printf("%d\n",d);
    return 0;
}
