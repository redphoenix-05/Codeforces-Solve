#include<stdio.h>
int main()
{
    int i,e,f=0;
    long long n;
    scanf("%lld",&n);
    for(i=1;n>0;i++)
    {
        e=n%10;
        n/=10;
        if(e==4 || e==7)
        {
            f++;
        }
    }
    if(f==4 || f==7)
        printf("YES");
    else printf("NO");
    return 0;
}
