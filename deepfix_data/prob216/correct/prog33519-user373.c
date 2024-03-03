#include <stdio.h>
#include <stdlib.h>
int fibo(int num){
    if(num==0)
    return 0;
    if(num==1)
    return fibo(num-1)+fibo(num-2); }
int main() {
    int size,i,j,t;
    scanf("%d",&size);
    for(i=1 ; i<=size; i++){
        scanf("%d",&t);
        for(j=0; j<20; j++){
    if(fibo(j)==size){
        printf("%d",i);
        return 0; } } }
	return 0; }