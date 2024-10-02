#include<stdio.h>
double summation(int ,double);
int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    sum=summation(n,sum);
    printf("%lf",sum);
}
double summation(int a,double b)
{
    int i,c;
    double d;
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            scanf("%d",&c);
            b=b+c;
            printf("%lf\n",b);
        }
        else
        {
            scanf("%lf",&d);
            b=b+d;
            printf("%lf\n",b);
        }
    }
    return b;
}
