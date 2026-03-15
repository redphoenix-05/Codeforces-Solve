#include <iostream>
using namespace std;

int main()
{
    string a,b;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        char temp;
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << " " << b << endl;
    }
    return 0;
}
