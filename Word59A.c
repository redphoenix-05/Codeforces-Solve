#include<stdio.h>
#include<string.h>

int main()
{
    int a,b=0,c=0,d,i;
    char s[100];
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        d=s[i];
        if(d>=65 && d<=90)
            b++;
        else if(d>=97 && d<=122)
            c++;
    }
    if(b>c)
    {
        for(i=0;i<a;i++)
        {
            d=s[i];
            if(d>=97){
                s[i]=d-32;
            }
        }
    }
    else if(b==c || c>b)
    {
        for(i=0;i<a;i++)
        {
            d=s[i];
            if(d>=65 && d<=90){
                s[i]=d+32;
            }
        }
    }
    printf("%s",s);
}
