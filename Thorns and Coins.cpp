#include<iostream>
using namespace std;

int main(){
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int n,c=0,m=0;
        cin >> n;
        char ch[n];
        for(int j=0;j<n;j++){
            cin >> ch[j];
        }
        for(int j=0;j<n;j++){
            if(ch[j]=='@'){
                c++;
            }
            else if(ch[j]=='*' && ch[j+1]=='*'){
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
