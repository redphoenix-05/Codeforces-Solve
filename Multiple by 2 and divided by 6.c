#include<stdio.h>

int main()
{
    int i,tc,n,a;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        a=0;
        scanf("%d",&n);
        while(n>0)
        {
            if(n==1)
            {
                printf("%d\n",a);
                break;
            }
            else if(n%6==0)
            {
                n/=6;
                a++;
            }
            else if(n%3==0)
            {
                n*=2;
                a++;
            }
            else
            {
                printf("%d\n",-1);
                break;
            }
        }
    }
    return 0;
}
