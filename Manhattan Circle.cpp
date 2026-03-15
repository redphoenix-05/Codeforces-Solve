#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int r=0;r<t;r++){
        int n,m;
        cin >> n >> m;
        int a,b,x,y,h,k,c=0;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
                if(arr[i][j]=='#'){
                    if(c==0){
                        a = i+1;
                        b = j+1;
                    }
                    c++;
                }
            }
        }
        if(c==1){
            cout << a << " " << b << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    c--;
                    if(c==0){
                        x = i+1;
                        y = j+1;
                    }
                }
            }
        }
        h = (a+x)/2;
        k = (b+y)/2;
        cout << h << " " << k << endl;
    }
    return 0;
}
