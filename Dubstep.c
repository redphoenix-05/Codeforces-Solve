#include<stdio.h>

int main()
{
    char str[210],s[200];
    scanf("%s",str);
    int i,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(j!=0 && s[j-1]!=' ')
            {
                s[j]=' ';
                j++;
            }

        }
        else
        {
            s[j]=str[i];
            j++;
        }
    }
    s[j]='\0';
    printf("%s",s);
    return 0;
}
