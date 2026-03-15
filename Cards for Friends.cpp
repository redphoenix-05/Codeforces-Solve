#include<iostream>
using namespace std;
int main()
{
    int i,t;
    cin >> t;
    for(i=0;i<t;i++){
        int w,h,n,c=0,i=0,j;
        cin >> w >> h >> n;
        if(w%2!=0 && h%2!=0)
            c=1;
        else{

            c=i*2+j*2;
        }
        if(c<n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }
    return 0;
}

