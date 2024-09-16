#include<stdio.h>
int main()
{
    int a[4],i,j,dup=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                dup++;
                break;
            }
        }
    }
    printf("%d",dup);
    return 0;
}
