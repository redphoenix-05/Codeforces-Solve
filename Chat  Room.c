#include<stdio.h>
int main()
{
    char str[110],s[6]="hello";
    gets(str);
    int i,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==s[j])
            j++;
    }
    if(j==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
