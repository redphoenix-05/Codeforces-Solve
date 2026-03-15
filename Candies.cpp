#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int n,j,k,s=1;
        cin >> n;
        for(j=2;;j=j*2)
        {
            s=s+j;
            if(n%s==0)
            {
                k=n/s;
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}
