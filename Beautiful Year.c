#include<stdio.h>

int main()
{
    int i,j,n,a[4],x,y;
    scanf("%d",&n);
    x=n+1;
    y=x;
    A:
    x=y;
    for(i=0;i<4;i++)
    {
        a[i]=x%10;
        x/=10;
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                y++;
                goto A;
            }
        }
    }
    printf("%d",y);
}
