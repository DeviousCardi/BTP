#include <stdio.h>
int main(){
    int n,i,b,j,l;
    scanf("%d",&n);
    int a[n];
    for(l=1;l<=n;l++){
        scanf("%d ",&a[l-1]); }
    for(i=0;i<n;i++){
        for(j=i+1;j<n-1;j++)
        if(a[i]==a[j] || a[i]==1){
            b=1;
            break; } }
    int t=i+2;
    int k=i+1;
    printf("%d %d",t,k);
    return 0; }