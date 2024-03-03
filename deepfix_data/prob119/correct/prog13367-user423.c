#include <stdio.h>
#include <stdlib.h>
int hanoi_moves(int n){
    if(n==1)
    return 1;
    else return (2*hanoi_moves(n-1)+1); }
int main(){
    int t,i,k;
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        scanf("%d",&k);
        for(k=0;k<=20;k++){
    }printf("%d\n",hanoi_moves(k)); }
    return 0; }