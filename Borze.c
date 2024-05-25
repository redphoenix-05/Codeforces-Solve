#include<stdio.h>
int main()
{
    char str[210];
    scanf("%s",str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='.')
            printf("0");
        else if(str[i]=='-' && str[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            printf("2");
            i++;
        }
    }
    return 0;
}
