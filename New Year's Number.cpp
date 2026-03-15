#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int b,c,t;
        cin >> b;
        c=b/2020;
        t=b-(2020*c);
        if(t<=c && t>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
