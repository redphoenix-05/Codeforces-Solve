#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=100)
        {
            a++;
            n-=100;
        }
        else if(n>=20)
        {
            a++;
            n-=20;
        }
        else if(n>=10)
        {
            a++;
            n-=10;
        }
        else if(n>=5)
        {
            a++;
            n-=5;
        }
        else
        {
            a++;
            n-=1;
        }
    }
    printf("%d",a);
}
