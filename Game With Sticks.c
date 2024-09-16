#include<stdio.h>
int main()
{
    int n,m,i,p=0;
    scanf("%d%d",&n,&m);
    for(i=1;;i++)
    {
        if(n-i==0)
            break;
        if(m-i==0)
            break;
    }
    if(i%2==0)
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }
    return 0;
}
