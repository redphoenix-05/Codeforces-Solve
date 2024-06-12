#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=1900)
            printf("Division 1\n");
        else if(a[i]>=1600)
            printf("Division 2\n");
        else if(a[i]>=1400)
            printf("Division 3\n");
        else
            printf("Division 4\n");
    }
    return 0;
}
