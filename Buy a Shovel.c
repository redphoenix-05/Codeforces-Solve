#include<stdio.h>

int main()
{
    int r,k,c=1,d;
    scanf("%d%d",&r,&k);
    d=(r*c)%10;
    while(d!=k && d!=0)
    {
        c++;
        d=(r*c)%10;
    }
    printf("%d\n",c);
    return 0;
}
