#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cin >> a >> b;
    if(a==2 && b==3){
        cout << "YES" << endl;
        return 0;
    }
    else if(a==2){
        cout << "NO" << endl;
        return 0;
    }
    a=a+2;
    for(i=2;;i++){
        if(a%i==0){
            if(a==b){
                cout << "NO" << endl;
                break;
            }
            else
                a+=2;
        }
        else if(i+1==a){
            if(a==b){
                cout << "YES" << endl;
                break;
            }
            else{
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}
