#include<stdio.h>
int main()
{
    int a,b,c,d,i,n,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(b<d)
        {
            for(k=1;b<d;k++)
            {
                a++;
                b++;
            }
            if(a>=c)
            {
                if(a>c)
                for(;a>c;k++)
                {
                    --a;
                    if(a==c)
                        printf("%d\n",k);
                }
                else printf("%d\n",k);

            }
            else if(a==c)
                printf("%d\n",k);
            else
                printf("-1\n");
        }
        else if(b==d && a==c)
        {
            printf("0\n");
        }
        else if(b==d)
        {
            if(a>c)
            {
                for(j=1;a>c;j++)
                {
                    a=a-1;
                    if(a==c)
                        printf("%d\n",j);
                }
            }
            else
                printf("-1\n");
        }
        else
            printf("-1\n");

    }
    return 0;
}
