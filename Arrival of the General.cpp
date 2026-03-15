#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],ma,mi,loc1,loc2,i,s;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    ma=a[0];
    loc1=1;
    mi=a[0];
    loc2=1;
    for(i=1;i<n;i++){
        if(ma<a[i]){
            ma=a[i];
            loc1=i+1;
        }
        if(mi>=a[i]){
            mi=a[i];
            loc2=i+1;
        }
    }
    if(loc1>loc2){
        s=loc1-1+n-loc2-1;
    }
    else{
        s=loc1-1+n-loc2;
    }
    cout << s << endl;
    return 0;
}
