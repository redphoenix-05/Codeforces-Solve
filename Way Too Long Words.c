#include<stdio.h>

int main()
{
    int i,n,j;
    char str[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        for(j=0;str[j]!=0;j++);
        {
            if(j<=10)
                printf("%s\n",str);
            else printf("%c%d%c\n",str[0],j-2,str[j-1]);
        }
    }
    return 0;
}
