#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n,sum=0,e;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = sum + a[i];
        }
        if(sum%n == 0){
            e=sum/n;
            for(int j=n;j>1;j--){
                if(a[j]<e){
                    for(int i=0;i<j;i++){
                        if(a[i]>e){
                            while(a[i]!=e || a[j]!=e){
                                a[i]--;
                                a[j]++;
                            }
                        }
                        if(a[j]==e){
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<n;i++){
                if(a[i]==e){
                    if(i==n-1){
                        cout << "YES" << endl;
                    }
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}
