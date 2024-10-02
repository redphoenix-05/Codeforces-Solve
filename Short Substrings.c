#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[1010],s[1010];
        scanf("%s",str);
        int j,t=0;
        for(j=0;str[j]!='\0';j++)
        {
            s[t]=str[j];
            t++;
            if(str[j]==str[j+1] && j>=1)
                j++;
        }
        s[t]='\0';
        printf("%s\n",s);
    }
    return 0;
}
