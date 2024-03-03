#include <stdio.h>
int main(){
    int k,n,i,j;
    scanf("%d",&k);
    scanf("\n%d",&n);
    int a[100];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
    for(j=n-1;j>=0;j--){
    if(a[i]+a[j]==k){
        printf("lucky"); }
    else{
        printf("unlucky");
    }}
    return 0; }