#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    i=1;
    if(a>b)
        i=0;
    else
    {
        while(a<=b)
        {
            a*=3;
            b*=2;
            if(a>b)
                break;
            i++;
        }
    }
    printf("%d",i);
    return 0;
}
