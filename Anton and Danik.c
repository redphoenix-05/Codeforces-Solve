#include<stdio.h>
int main()
{
    int n,i,a,d;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    a=0;
    d=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A')
            a++;
        else d++;
    }
    if(a>d) printf("Anton");
    else if(a<d) printf("Danik");
    else printf("Friendship");
    return 0;
}
