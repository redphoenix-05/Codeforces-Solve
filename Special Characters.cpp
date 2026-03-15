#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin >> t;
    while(t!=0){
        cin >> n;
        if(n%2==1){
            cout << "NO" << endl;
            t--;
            continue;
        }
        cout << "YES" << endl;
        int a,c=0;char b;
        for(int i=1;i<=n;i++){
            a = 65+c;
            if(i%2==0){
                c++;
            }
            b=a;
            cout << b;
        }
        cout << endl;
        t--;
    }
    return 0;
}
