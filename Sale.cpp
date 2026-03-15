#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n],i,s=0;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++){
        if(a[i]<0)
            s=s+a[i];
        else
            break;
    }
    if(s<0){
        s=-s;
    }
    else{
        s=0;
    }
    cout << s << endl;
    return 0;
}
