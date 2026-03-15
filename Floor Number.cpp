#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int j,n,x,s=2;
        cin >> n >> x;
        for(j=2;s<n;j++)
        {
            s=(j-1)*x+2;
            if(s>=n)
                break;
        }
        if(s==2)
        {
            j=1;
        }
        cout << j << endl;
    }
    return 0;
}
