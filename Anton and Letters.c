#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    gets(str);
    int a,i,j,temp,c=0;
    a=strlen(str);
    int b[a];
    for(i=0;str[i]!='\0';i++)
    {
        b[i]=str[i];
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=b[i];
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='{' || str[i]==' ' || str[i]=='}' || str[i]==',')
            continue;
        else if(str[i]!=str[i-1])
            c++;
    }
    printf("%d\n",c);
    return 0;
}
