#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int a;
        cin >> a;
        if(a%2==1)
            cout << (a/2)+1 << endl;
        else
            cout << a/2 << endl;
    }
    return 0;
}
