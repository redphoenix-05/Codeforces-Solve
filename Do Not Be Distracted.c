#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,k=0,m=0;
        scanf("%d",&n);
        char str[n+1],s[n+1];
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]!=str[j+1])
            {
                s[k]=str[j];
                k++;
            }
        }
        s[k]='\0';
        printf("%s\n",s);
        for(j=0;s[j]!='\0';j++)
        {
            for(k=j+1;s[k]='\0';k++)
            {
                if(s[j]==s[k])
                {
                    m=1;
                    break;
                }
                else
                {
                    m=0;
                }
            }
            if(m==1)
                break;
        }
        if(m==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
