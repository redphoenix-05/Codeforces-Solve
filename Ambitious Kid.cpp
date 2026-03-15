#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,n;
    cin >> n;
    int a[n],d[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>0){
            d[i]=a[i];
        }
        else if(a[i]==0){
            d[i]=0;
        }
        else{
            d[i]=-a[i];
        }
    }
    sort(d,d+n);
    cout << d[0] << endl;
    return 0;
}
