#include<stdio.h>
int catalan(int n){
    int i,sum=0;
    if(n==0)return 1;
    else{
        for(i=0;i<n;i++){
            sum=sum+catalan(i)*catalan(n-i-1); }
        return sum; } }
int main(){
    int t,k,i,a[17];
    scanf("%d",&t);
    for(i=0;i<17;i++){
        a[i]=catalan(i); }
    while(t--){
        scanf("%d",&k);
        for(i=0;i<17;i++){
           if(k==a[i]){
               printf("yes\n");
               break; } }
        if(i==17){
            printf("no\n"); } }
    return 0; }