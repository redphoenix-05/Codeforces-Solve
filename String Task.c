#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j=0,b;
    char str[150],s[150],st[200];
    scanf("%s",str);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='y')
            continue;
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y')
            continue;
        else
        {
            s[j]=str[i];
            j++;
        }
    }
    s[j]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        b=s[i];
        if(b<=97)
            b+=32;
        s[i]=b;
    }
    j=0;
    for(i=0;s[j]!='\0';i++)
    {
        if(i%2==0)
            st[i]='.';
        else
        {
            st[i]=s[j];
            j++;
        }
    }
    st[i]='\0';
    printf("%s",st);
    return 0;
}
