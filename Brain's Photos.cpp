#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,c=0;
    cin >> m >> n;
    char a;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a;
            getchar();
            if(a!='B' && a!='W' && a!='G')
                c=1;
        }
    }
    if(c==1)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}
