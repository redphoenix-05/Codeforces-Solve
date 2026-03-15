#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        string st,str;
        cin >> m >> st >> str;
        int c=0,b=0,a=0,d;
        for(int j=0;j<m;j++){
            if(st[j]!=str[j]){
                if(st[j]=='1'){
                    b++;
                }
                if(str[j]=='1'){
                    a++;
                }
            }
        }
        if(a>b){
            cout << a << endl;
        }
        else{
            cout << b << endl;
        }
    }
    return 0;
}
