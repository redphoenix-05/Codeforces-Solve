#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        int total_segments = n - p + 1;
        if ((total_segments * q) % p == 0 && (total_segments * q) / p == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
