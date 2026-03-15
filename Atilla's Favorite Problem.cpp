#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int n;
        cin >> n;
        char a[n];
        int b[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
            b[j]=a[j]-96;
        }
        sort(b,b+n);
        cout << b[n-1] << endl;
    }
    return 0;
}
