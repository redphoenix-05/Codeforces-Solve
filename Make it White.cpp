#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string s;
        int l;
        cin >> l >> s;
        int c=0;
        for(int j=0;j<l;j++){
            if(s[j]=='B'){
                c++;
            }
        }
        int a[c],k=0;
        for(int j=0;j<l;j++){
            if(s[j]=='B'){
                a[k]=j+1;
                k++;
            }
        }
        int d = a[c-1] - a[0] + 1;
        cout << d << endl;
    }
}
