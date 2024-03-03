#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2); }
int main() {
    int i,k,n,j,c=0;
    scanf("%d\n",&n);
    for(i=0; i<n; i++){
        c=0;
        scanf("%d\n",&k);
    for(j=1; j<=20; j++){
        if(fibo(j)==k){
        c=1;
        break;} }
        if(c==1)
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }