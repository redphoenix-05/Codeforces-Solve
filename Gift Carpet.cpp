#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
        int m,n,j,k,a[4],x=0,temp=0;
        string s="vika";
        cin >> m >> n;
        char c[m][n];
        for(j=0;j<m;j++){
            for(k=0;k<n;k++)
            {
                cin >> c[j][k];
                //
            }
        }
        for(k=0;k<n;k++){
            for(j=0;j<m;j++){
                if(c[j][k]==s[x]){
                    a[x]=k+1;
                    x++;
                    break;
                }
            }
        }
        if(x!=4){
            cout << "NO" << endl;
        }
        else{
            for(k=0;k<3;k++){
                if(a[k]<a[k+1]){
                    if(k+1==3){
                        cout << "YES" << endl;
                    }
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
