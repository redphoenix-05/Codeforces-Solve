#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,c;
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    a=strlen(str1);
    b=strlen(str2);
    for(i=0,j=b-1;i<a && j>=0;i++,j--)
    {
        if(str1[i]==str2[j])
        {
            c=0;
        }
        else
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
