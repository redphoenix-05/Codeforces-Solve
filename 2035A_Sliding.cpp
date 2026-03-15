#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int k = 0; k < t; k++) {
        int n, m, r, c;
        int sum = 0;
        cin >> n >> m >> r >> c;
        int a = pow(m-1,n-1);
        int b = pow(c-1,r-1);
        if(r-1 == 0){
            b = 0;
        }
        int d = (r*c)+b;
        sum = (n*m) - d + a;
        cout << sum << endl;
    }
    return 0;
}

// It's not done yet must do it.