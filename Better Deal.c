#include<stdio.h>

int main()
{
    int n,a,b,c,d,e,f,i;
    c=100,d=200;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        e=c-a;
        f=d-(d*b/100);
        if(e<f)
            printf("FIRST\n");
        else if(e>f)
            printf("SECOND\n");
        else
            printf("BOTH\n");
    }
    return 0;
}
