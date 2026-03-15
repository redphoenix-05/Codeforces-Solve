#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x[4],y[4],d;
        for(int j=0;j<4;j++){
            cin >> x[j] >> y[j];
        }
        for(int j=1;j<4;j++){
            if(x[0]==x[j]){
                d = y[0]-y[j];
                d=d*d;
                break;
            }
        }
        cout << d << endl;
    }
    return 0;
}
