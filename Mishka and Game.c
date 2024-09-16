#include<stdio.h>
int main()
{
    int a,b,m,c,i,n;
    m=0;
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            m++;
        else if(a<b)
            c++;
    }
    if(m>c) printf("Mishka");
    else if(m<c) printf("Chris");
    else printf("Friendship is magic!^^");
    return 0;
}
