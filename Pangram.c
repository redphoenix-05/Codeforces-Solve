#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int f[26],al[26],i,a,b;
    for(i=0;i<26;i++)
    {
        al[i]=1;
        f[i]=0;
    }
    for(i=0;str[i]!='\0';i++)
    {
        a=str[i];
        if(a>64 && a<97)
        {
            b=a-65;
            f[b]++;
        }
        else
        {
            b=a-97;
            f[b]++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(f[i]>=al[i])
        {
            if(i==25)
                printf("YES");
        }
        else
        {
            printf("NO");
            break;
        }
    }
    return 0;
}
