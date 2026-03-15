#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int a,b,c,n,t,s,x,y,z;
        cin >> a >> b >> c >> n;
        s=(a+b+c+n);
        t=s/3;
        x=t-a;
        y=t-b;
        z=t-c;
        if((t*3)==s){
            if(x>=0 && y>=0 && z>=0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
