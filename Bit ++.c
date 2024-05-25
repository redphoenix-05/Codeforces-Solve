#include<stdio.h>
int main()
{
    int x=0,n,i;
    char str[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        if(str[0]=='+' || str[2]=='+')
        {
            x++;
        }
        else x--;
    }

    printf("%d",x);
    return 0;

}
