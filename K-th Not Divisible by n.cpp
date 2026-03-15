#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int n,k,a,b,d;
        cin >> n >> k;
        for(i=1;;i++){
            d=n*i-i;
            if(d>=k){
                if(d==k){
                    a=n*i-1;
                    cout << a << endl;
                }
                else{
                    b=d-k;
                    a=n*i-b-1;
                    cout << a << endl;
                }
                break;
            }
        }
    }
    return 0;
}
