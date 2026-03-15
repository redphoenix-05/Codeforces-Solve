#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        double a,b,c;
        int d;
        cin >> a >> b;
        c=(a*b)/2;
        d=ceil(c);
        cout << d << endl;
    }
    return 0;
}
