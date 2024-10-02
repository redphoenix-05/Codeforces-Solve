#include<stdio.h>
#include<string.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        char str[110],s1[60],s2[60];
        int a,j,k=0,c;
        scanf("%s",str);
        a=strlen(str);
        if(a%2==0)
        {
            for(j=0;j<(a/2);j++)
            {
                s1[j]=str[j];
            }
            s1[j]='\0';
            for(;j<a;j++)
            {
                s2[k]=str[j];
                k++;
            }
            s2[k]='\0';
            c=strcmp(s1,s2);
            if(c==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
}
