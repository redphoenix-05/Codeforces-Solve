#include<iostream>
using namespace std;
int main(){
    int n,a=0,i;
    cin >> n;
    for(i=1;i<n;i++){
        if(n%i==0)
            a++;
    }
    cout << a << endl;
    return 0;
}
