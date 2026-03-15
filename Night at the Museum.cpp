#include<iostream>
using namespace std;
int main(){
    int i,b,c,t,s=0;
    string st;
    cin >> st;
    b=st[0]-97;
    c=b;
    if(b>=0){
        if(b>13){
            b=26-b;
            s=s+b;
        }
        else{
            s=s+b;
        }
    }
    for(i=1;st[i]!='\0';i++){
        b=st[i]-97;
        t=b-c;
        c=b;
        if(t>=0){
            if(t>13){
                t=26-t;
                s=s+t;
            }
            else{
                s=s+t;
            }
        }
        else{
            t=-t;
            if(t>13){
                t=26-t;
                s=s+t;
            }
            else{
                s=s+t;
            }
        }
    }
    cout << s << endl;
    return 0;
}
