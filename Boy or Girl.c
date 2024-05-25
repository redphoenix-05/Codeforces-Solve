#include<stdio.h>
#include<string.h>

int main()
{
    int a=0,i,j,b;
    char str[100];
    scanf("%s",str);
    b=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!=0;j++)
        {
            if(str[i]==str[j])
                break;
            else
            {
                if(j==b-1)
                    a++;
            }
        }
    }
    a+=1;
    if(a%2==0)
        printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}
