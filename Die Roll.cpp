#include<iostream>
using namespace std;
int main()
{
    int y,w,a,b;
    cin >> y >> w;
    if(y>=w && y<6)
    {
        a=6-y+1;
    }
    else if(w>=y && w<6)
    {
        a=6-w+1;
    }
    else if(w==6 || y==6)
    {
        a=1;
        b=6;
    }
    if(a!=1)
    {
        if(a==4)
        {
            a=2;
            b=3;
        }
        else if(a==2)
        {
            a=1;
            b=3;
        }
        else if(a==3)
        {
            a=1;
            b=2;
        }
    }
    else if(a==1 && (y<6 && w<6))
    {
        a=1;
        b=1;
    }
    cout << a << "/" << b << endl;
    return 0;
}
