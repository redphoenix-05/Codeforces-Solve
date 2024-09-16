#include<stdio.h>
int main()
{
    int i,n,a=0,c=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>0)
        {
            a+=b[i];
        }
        else if(b[i]==-1)
        {
            if(a==0)
            {
                c++;
            }
            else
            {
                a+=b[i];
            }
        }
    }
    printf("%d\n",c);
}
