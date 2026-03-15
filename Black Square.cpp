#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,t=0,i;
    string s;
    cin >> a >> b >> c >> d >> s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
            t=t+a;
        }
        else if(s[i]=='2'){
            t=t+b;
        }
        else if(s[i]=='3'){
            t=t+c;
        }
        else{
            t=t+d;
        }
    }
    cout << t << endl;
    return 0;
}
