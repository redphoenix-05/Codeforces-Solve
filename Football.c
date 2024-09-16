#include<stdio.h>
#include<string.h>
int main()
{
    int i,a,b;
    char str[100];
    scanf("%s",str);
    a=strlen(str);
    b=0;
    if(a<7)
        printf("NO");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]==str[i+1])
            {
                b++;
            }
            else if(str[i]!=str[i+1] && b+1<7)
            {
                b=0;
            }
        }
        if(b>=6)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
