#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int n,j,a[5];
        string s,b="Timru";
        cin >> n >> s;
        if(n!=5){
            cout << "NO" << endl;
            continue;
        }
        sort(s.begin(),s.end());
        if(s==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
