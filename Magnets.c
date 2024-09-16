#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,j=1,b;
    char str[3],str1[3]="01";
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        a[i]=strcmp(str,str1);
    }

    if(a[0]==0)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                j++;
        }
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                j++;
        }
    }
    printf("%d",j);
}
