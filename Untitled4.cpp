#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,x,y;
        cin >> n >> x >> y;
        int a[n],c=0,b,d;
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                b=a[j]+a[k];
                d=a[j]-a[k];
                if(b%x==0 && d%y==0){
                    c++;
                }
                else{
                    continue;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
