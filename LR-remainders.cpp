#include<iostream>
using namespace std;

int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        int a[n],mul=1;
        char ch[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n;j++){
            cin >> ch[j];
        }
        int l,r,d;
        l=0;
        int temp = l;
        r=n-1;
        int j=0;
        while(l!=r){
            for(;l<=r;l++){
                mul=mul*a[l];
            }
            d = mul%m;
            cout << d << endl;
            if(ch[j]=='L'){
                l=temp+1;
                temp = l;
                cout << l << endl;
            }
            else{
                r = r-1;
                cout << r << endl;
            }
            j++;
        }
        d = a[l]%m;
        cout << d << endl;
    }
    return 0;
}
