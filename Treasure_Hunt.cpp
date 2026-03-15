#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int b,k,a,s=0;
        cin >> b >> k >> a;
        s = a%(b+k);
        if(s==0){
            cout << "NO" << endl;
        }
        else if(s<b){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
