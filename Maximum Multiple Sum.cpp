#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n,a = 2,sum,m = 0,x;
        cin >> n;
        while(a<=n){
            sum = 0;
            int b = a,j=1;
            while(b <= n){
                sum = sum + b;
                j++;
                b = a*j;
            }
            if(m < sum){
                m = sum;
                x = a;
            }
            a++;
        }
        cout << x << endl;
    }
    return 0;
}
