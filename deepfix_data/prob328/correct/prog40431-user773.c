#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else return fibonacci(n-1)+fibonacci(n-2); }
int main() {
    int i,t,k,j, flag;
    int fibo[20];
    scanf("%d",&t);
    for(i=0; i<20; i++){
        fibo[i]=fibonacci(i+1); }
    for(j=0; j<t; j++){
        flag=0;
        scanf("%d", &k);
        for(i=0; i<20; i++){
            if(fibo[i]==k){
                printf("yes\n");
                flag=1;
                break; } }
        if(flag!=1){
                printf("no\n"); } }
	return 0; }