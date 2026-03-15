#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int n,x=0,y=0,t=0;
        cin >> n;
        char c[n];
        for(int j=0;j<n;j++){
            cin >> c[j];
        }
        for(int j=0;j<n;j++){
            if(c[j]=='U')
                y++;
            else if(c[j]=='D')
                y--;
            else if(c[j]=='R')
                x++;
            else
                x--;
            if(x==1 && y==1){
                t=1;
            }
        }
        if(t==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
