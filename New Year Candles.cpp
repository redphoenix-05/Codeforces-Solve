#include<iostream>
using namespace std;
int main(){
    int i,a,b;
    cin >> a >> b;
    for(i=1;b*i<=a;i++){
        a++;
    }
    cout << a << endl;
    return 0;
}
