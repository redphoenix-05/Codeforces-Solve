#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int j,n,b=0,c=0;
        cin >> n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin >> a[j];
            if(a[j]==1)
                b++;
            else
                c++;
        }
        if(b%2==0 && c%2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
