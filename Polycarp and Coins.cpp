#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int n,c,a,b,x,y;
        cin >> n;
        c=n/3;
        a=c;
        b=n-(a*2);
        x=c;
        y=(n-x)/2;
        if(a+b>x+y && (a*2)+b==n && x+(y*2)==n)
            cout << x << " " << y << endl;
        else
            cout << b << " " << a << endl;
    }
    return 0;
}
