#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n;
        cin >> n;
        int arr[n];
        char ch;
        for(int i = 0;i<n;i++){
            for(int j=0;j<4;j++){
                cin >> ch;
                if(ch == '#'){
                    arr[i] = j+1;
                }
            }
        }
        for(int i = n-1;i>=0;i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}