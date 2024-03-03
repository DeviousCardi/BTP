#include<stdio.h>
#include<stdlib.h>
int catalan(int n){
    if(n==1) return 1;
    int p=2*(2*n-1);
    int q=n+1;
    return ((catalan(n-1)*p)/q); }
int main(){
    int i,t,j;
    scanf("%d\n ",&t);
    int test[t];
    for(i=0;i<t;i++){
    scanf("%d",&test[i]);
    printf("%d",test[i]);
    j=0;
    while(catalan(j)<=test[i]){
    j++;}
    printf("%d",j);
    printf("%d",catalan(j+1)); }
    return 0; }