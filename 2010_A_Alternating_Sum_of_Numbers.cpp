#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,sum=0;
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        for(int i=1;i<=n;i++){
            if(i%2==0){
                sum = sum - arr[i-1];
            }
            else{
                sum = sum + arr[i-1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}