#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        char str[4];
        scanf("%s",str);
        if( (str[0]=='y' || str[0]=='Y') &&
            (str[1]=='e' || str[1]=='E') &&
            (str[2]=='s' || str[2]=='S') )
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
