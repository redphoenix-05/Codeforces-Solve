#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,f;
    cin >> n;
    string str[n];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    int i,j;
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<i;j++){
            int b = str[i].compare(str[j]);
            if(b==0){
                c++;
            }
        }
        if(c>0){
            f=str[i].length();
            char ch;
            cout << str[i] << c << endl;
        }
        else{
            cout << "OK" << endl;
        }
    }
    return 0;
}
