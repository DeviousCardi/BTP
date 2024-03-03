#include <stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n];
    for(l=1;l<=n;l++){
        scanf("%d ",&a[l-1]); }
    int b[n];
    b[0]=1;
    b[1]=a[0];
    for(i=1;i<=n-1;i++){
        if(a[i-1]==i+1){
            b[i+1]=a[i]; }
        else b[i]=i; }
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(b[j]==b[k]) break; } }
    printf("%d %d",k-j+1,k-j);
    return 0; }