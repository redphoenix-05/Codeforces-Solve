#include<stdio.h>
int main()
{
    int i,a;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        a=str[i];
        if(a>=97)
            a=a-32;
        str[i]=a;
    }
    printf("%s",str);
    return 0;
}
