#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int a,b,n,s;
        cin >> a >> b >> n >> s;
        if((a*n+b)>=s){
            if((a*n)+b==s){
                cout << "YES" << endl;
            }
            else if(s%n==0){
                cout << "YES" << endl;
            }
            else if(s<=b){
                cout << "YES" << endl;
            }
            else if((s-a*n)<=b && (a*n)<s){
                cout << "YES" << endl;
            }
            else{
                if((s-1)%n==0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
