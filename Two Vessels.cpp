#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        double a,b,c,e;
        int n;
        cin >> a >> b >> c;
        if(a>b){
            e=(a-b)/2;
        }
        else{
            e=(b-a)/2;
        }
        n=e/c;
        if(e!=0 && n==0){
            n=1;
        }
        else if(e==0){
            n=0;
        }
        else{
            if(n*c!=e){
                n++;
            }
        }
        cout << n << endl;
    }
    return 0;
}
