#include <stdio.h>
int main(){
    int n,i,j,m=0,p,q;
    scanf("%d",&n);
    int a [n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=1;i<=n;i++){
        p=0;
        for(j=0;j<n;j++){
            if(i==a[j]){m++;} }
        if(m==2){p=i;}
        if(m==0){q=i;} }
    return 0; }