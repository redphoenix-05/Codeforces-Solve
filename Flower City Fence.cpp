#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int b;
        cin >> b;
        int a[b],j;
        for(j=0;j<b;j++){
            cin >> a[j];
        }
        if(a[0]==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
