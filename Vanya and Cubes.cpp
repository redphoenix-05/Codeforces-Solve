#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0,f=0;
    cin >> n;
    for(i=1;;i++)
    {
        s=s+i;
        f=f+s;
        if(f==n)
        {
            cout << i << endl;
            break;
        }
        else if(f>n)
        {
            cout << i-1 << endl;
            break;
        }
    }
    return 0;
}
