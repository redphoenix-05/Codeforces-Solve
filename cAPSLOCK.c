#include <stdio.h>
#include <string.h>
int decap(char str[],int i)
{
    int b;
    for(;str[i]!='\0';i++)
    {
        b=str[i];
        if(64<b  && b<97)
        {
            b+=32;
            str[i]=b;
        }
    }
}
int main()
{
    int i,a,b[100],c;
    char str[100];
    scanf("%s",str);
    c=strlen(str);
    a=str[0];
    if(c==1)
    {
        if(a>=97)
        {
            a=a-32;
            str[0]=a;
        }
        else
        {
            a=a+32;
            str[0]=a;
        }
    }
    else if(a>64 && a<97)
    {
        for(i=0;str[i]!='\0';i++)
        {
            b[i]=str[i];
            if(b[i]>64 && b[i]<97)
            {
                if(i==c-1)
                    decap(str,0);
            }
            else break;
        }
    }
    else if(a>=97)
    {
        for(i=1;str[i]!='\0';i++)
        {
            b[i]=str[i];
            if(b[i]>64 && b[i]<97)
            {
                if(i==c-1)
                {
                    a=a-32;
                    str[0]=a;
                    for(i=1;str[i]!='\0';i++)
                    {
                        b[i]=str[i];
                        if(b[i]>64 && b[i]<97)
                        {
                            b[i]=b[i]+32;
                            str[i]=b[i];
                        }
                    }
                }
            }
            else
            {
                break;

            }
        }
    }
    printf("%s",str);
    return 0;
}
