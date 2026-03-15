#include<iostream>
using namespace std;
int main(){
    int i,n,t;
    cin >> n >> t;
    int a[n-1],b[n-1],c;
    for(i=0;i<n-1;i++){
        cin >> a[i];
    }
    int loc=1,next;
    while(loc<t){
        next=loc+a[loc-1];
        loc=next;
    }
    if(loc==t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
