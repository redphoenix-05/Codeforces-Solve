#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int c = m-n;
    c++;n--;
    int i,a[m],b[c];
    for(i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a,a+m);
    for(i=0;i<c;i++){
        b[i]=a[i+n]-a[i];
    }
    sort(b,b+c);
    cout << b[0] << endl;
    return 0;
}
