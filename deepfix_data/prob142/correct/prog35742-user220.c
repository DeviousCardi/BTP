#include <stdio.h>
#include <stdlib.h>
void hanoi_nrml(char From,char To,char B,int n){
    if(n==1){
        printf("%c->%c",From,To); }
    hanoi_nrml(From,B,To,n-1);
    hanoi_nrml(B,To,From,n-1); }
int main(){
    int N;
    scanf("%d",&N);
    return 0; }