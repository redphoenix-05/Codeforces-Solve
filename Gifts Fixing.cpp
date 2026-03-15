#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        long long n,m1,m2,c=0;
        cin >> n;
        int a[n],b[n],j,d,e;
        for(j=0;j<n;j++){
            cin >> a[j];
        }
        for(j=0;j<n;j++){
            cin >> b[j];
        }
        m1=a[0];
        m2=b[0];
        for(j=1;j<n;j++){
            if(m1>a[j]){
                m1=a[j];
            }
            if(m2>b[j]){
                m2=b[j];
            }
        }
        for(j=0;j<n;j++){
            if(a[j]>m1 && b[j]>m2){
                d=a[j]-m1;
                e=b[j]-m2;
                if(d>e){
                    c=c+d;
                }
                else{
                    c=c+e;
                }
            }
            else if(a[j]>m1){
                c=c+a[j]-m1;
            }
            else if(b[j]>m2){
                c=c+b[j]-m2;
            }
        }
        cout << c << endl;
    }
    return 0;
}
