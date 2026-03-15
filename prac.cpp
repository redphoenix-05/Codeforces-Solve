#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,d,c;
    cin >> a >> b;
    d=b-a;
    if(d>1){
        c=(a*(a+1))%2019;
    }
    else{
        cout << 2;
        c=(a*b)%2019;
    }
    cout << c << endl;
    return 0;
}
