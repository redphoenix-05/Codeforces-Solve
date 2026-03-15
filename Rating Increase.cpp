#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t,n,c=0,b=0,l=1,a=0,d=0,temp;
        cin >> n;
        t=n;
        while(t!=0){
            c++;
            t/=10;
        }
        t=n;
        b=b+(t%10);
        t/=10;
        while(t>=b){
            l=l*10;
            b=b+(t%10)*l;
            t/=10;
        }
        cout << t << " " << b << endl;
        temp=t;
        while(temp!=0){
            a++;
            temp/=10;
        }
        temp=b;
        while(temp!=0){
            d++;
            temp/=10;
        }
        if(t==b){
            cout << -1 << endl;
            continue;
        }
        else if(t==0){
            cout << -1 << endl;
            continue;
        }
        else{
            if(a+d==c){
                cout << t << " " << b << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
