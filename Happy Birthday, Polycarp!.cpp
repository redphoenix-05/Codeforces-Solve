#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int a,s,j,b=1,k,n;
        cin >> a;
        if(a<10){
            cout << a << endl;
        }
        else{
            n=a;
            for(j=0;n>0;j++){
                n=n/10;
            }
            for(k=1;k<j;k++){
                b=10*b+1;
            }
            s=9*(j-1);
            for(j=b;j<=a;j+=b){
                s++;
            }
            cout << s << endl;
        }
    }
    return 0;
}
