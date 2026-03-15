#include<bits/stdc++.h>
using namespace std;

int main(){
    string d,e,f,m;
    cin >> d >> e >> f;
    m=d+e;
    sort(m.begin(),m.end());
    sort(f.begin(),f.end());
    int a=m.length();
    int b=f.length();
    int i=0;
    if(a==b){
        while(i<a){
            if(m[i]!=f[i]){
                cout << "NO" << endl;
                break;
            }
            i++;
        }
        if(i==a){
            cout << "YES" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
