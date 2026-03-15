#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        int b,c;
        b=a[0];
        c=a[1]-48;
        for(int j=1;j<=8;j++){

            if(c==j)
                continue;
            else
                cout << a[0] << j << endl;
        }
        for(int j=97;j<=104;j++){
            if(j==b)
                continue;
            else{
                a[0]=j;
                cout << a[0] << c << endl;
            }
        }
    }
    return 0;
}
