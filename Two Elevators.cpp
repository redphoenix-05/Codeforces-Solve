#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int a,b,c,s,t;
        cin >> a >> b >> c;
        if(a==1)
            cout << 1 << endl;
        else{
            s=a-1;
            if(b==1){
                t=(c-b)*2;
            }
            else if(b<c){
                t=(2*c)-b-1;
            }
            else if(c==1){
                t=b-c;
            }
            else{
                t=b-c-1;
            }
            if(s==t)
                cout << 3 << endl;
            else if(s<t)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
