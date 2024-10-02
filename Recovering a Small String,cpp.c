#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        char b[3];
        cin >> a;
        int e;
        e = a/3;
        b[0] = 96 + e;
        a-=e;
        b[1] = 96 + e;
        a-=e;
        b[2] = 96 + a;
        for(int j=0;j<3;j++){
            cout << b[i];
        }
        cout << endl;
    }
}
