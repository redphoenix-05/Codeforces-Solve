#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int a,b,n,c=0;
        cin >> a >> b >> n;
        if(a>=b){
            while(a<=n){
                b=b+a;
                c++;
            }
        }
        else if(b>a){
            while(b<=n){
                a=a+b;
                c++;
            }
        }
        cout << c << endl;
    }
}
