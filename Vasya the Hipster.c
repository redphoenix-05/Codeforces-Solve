#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        b-=a;
        printf("%d %d\n",a,b/2);
    }
    else if(b<a)
    {
        a-=b;
        printf("%d %d\n",b,a/2);
    }
    else
    {
        printf("%d %d\n",a,0);
    }
    return 0;
}
