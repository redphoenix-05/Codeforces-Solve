#include<stdio.h>
int main()
{
    char s[110];
    int a[110],i,j=0,k,tem;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            a[j]=s[i];
            j++;
        }
    }
    k=j;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            s[i]=a[j];
            j++;
        }
    }
    printf("%s",s);
    return 0;
}
