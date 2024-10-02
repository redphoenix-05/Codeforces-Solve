#include<stdio.h>
int main()
{
    int p,q,r,s;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    int a,b,c;
    if(p>q && p>r && p>s)
    {
        c=p-q;
        b=p-r;
        a=p-s;
    }
    else if(q>p && q>r && q>s)
    {
        c=q-p;
        b=q-r;
        a=q-s;
    }
    else if(r>p && r>q && r>s)
    {
        c=r-p;
        b=r-q;
        a=r-s;
    }
    else
    {
        c=s-p;
        b=s-q;
        a=s-r;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
