#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int n,s=0,even=0,odd=0;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
            s+=a[j];
            if(a[j]%2!=0 || a[j]==1){
                odd++;
            }
            else
                even++;
        }
        if(s%2!=0||s==1){
            cout << "YES" << endl;
        }
        else{
            if(odd!=0 && even!=0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
