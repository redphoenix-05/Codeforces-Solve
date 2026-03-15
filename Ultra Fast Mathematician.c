#include<stdio.h>
int main()
{
    int i;
    char a[110],b[110],c[110];
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='1' && b[i]=='1') || (a[i]=='0' && b[i]=='0'))
            c[i]='0';
        else
            c[i]='1';
    }
    c[i]='\0';
    printf("%s",c);
    return 0;
}
