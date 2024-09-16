#include<stdio.h>
int main()
{
    int a;
    char str[100000];
    scanf("%s",str);
    a=str[0];
    if(a>=97 && a<=122)
    {
        str[0]=a-32;
        printf("%s",str);
    }
    else
    {
        printf("%s",str);
    }
    return 0;
}
