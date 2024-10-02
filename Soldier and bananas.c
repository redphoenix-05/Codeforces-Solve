#include<stdio.h>
int main()
{
    int i,k,n,w,r=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        r+=(i*k);
    }
    if(r>n)
        printf("%d",r-n);
    else printf("0");
    return 0;
}
