#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,j=0,b[5],k,c,d=0;
        scanf("%d",&a);
        while(a!=0)
        {
            b[j]=a%10;
            a=a/10;
            if(b[j]!=0)
                d++;
            j++;
        }
        printf("%d\n",d);
        for(k=0;k<j;k++)
        {
            if(b[k]!=0)
            {
                c=pow(10,k);
                b[k]=b[k]*c;
                printf("%d ",b[k]);
            }
        }
        printf("\n");
    }
}
