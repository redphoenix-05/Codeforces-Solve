#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,tc;
    cin >> tc;
    for(i=0;i<tc;i++){
        int j,t,n,d;
        cin >> t;
        int a[t];
        a[0]=2;
        for(j=1;j<t;j++){
            a[j]=2*a[j-1];
        }
        n=t/2;
        d=a[n]-a[0];
        cout << d << endl;
    }
    return 0;
}
