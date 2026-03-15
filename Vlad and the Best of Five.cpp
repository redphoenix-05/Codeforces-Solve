#include<iostream>
using namespace std;

int main()
{
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        char ch[5];
        int a=0,b=0;
        for(int j=0;j<5;j++){
            cin >> ch[j];
            if(ch[j]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    return 0;
}
