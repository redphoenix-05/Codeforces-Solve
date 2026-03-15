#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c=0;
    cin >> n;
    for(i=0;i<n;i++)
    {

        cin >> a >> b;
        if(b>a)
            c=1;
    }
    if(c==1)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
    return 0;
}
