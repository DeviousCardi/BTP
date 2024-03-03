#include<stdio.h>
int catalan(int n){
    if(n==0)return 1;
    else if(n==1)return 1;
    else return 2*catalan(n-1); }
int main(){
    int t,k,i;
    while(t--){
        scanf("%d",&k);
        for(i=0;i<5;i++){
            if(catalan(i)==k){printf("yes\n")break;}
            else printf("no\n"); } }
    return 0; }