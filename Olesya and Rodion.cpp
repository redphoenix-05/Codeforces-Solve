#include<iostream>
using namespace std;
int main()
{
    int i,n,t,b,c;
    cin >> n >> t;
    if(n==1 && t==10){
        cout << -1 << endl;
    }
    else if(n>=2 && t==10){
        for(i=1;i<n;i++){
            cout << 1;
        }
        cout << 0 << endl;
    }
    else{
        for(i=1;i<=n;i++){
            cout << t;
        }
        cout << endl;
    }
    return 0;
}
/// here we can't give output for numbers whose length is greater than 18
/// so we give the divisible number n times as output
