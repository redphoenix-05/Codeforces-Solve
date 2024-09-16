#include<stdio.h>
int main(){
    int n,k,c,i,m;
    scanf("%d%d",&n,&k);
    int a[n];
    c=n-k+1;
    int b[c],d[c];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++){
        b[i]=a[i]+a[i+1]+a[i+2];
        d[i]=i+1;
    }
    m=b[0];
    for(i=0;i<c;i++){
        if(m>b[i]){
            m=b[i];
        }
    }
    for(i=0;i<c;i++){
        if(m==b[i]){
            printf("%d\n",d[i]);
            break;
        }
    }
    return 0;
}

