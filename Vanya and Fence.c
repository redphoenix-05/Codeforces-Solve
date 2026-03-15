#include<stdio.h>
int main()
{
    int i,n,h,width=0;
    scanf("%d %d",&n,&h);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            width+=2;
        else
            width+=1;
    }
    printf("%d",width);
    return 0;
}

