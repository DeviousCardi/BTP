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
    int i,j,x,n,A[20],c[]=0;
    scanf("%d\n",&n);
    for(i=0; i<n; i++){
        scanf("%d\n",&A[i]); }
    for(x=0; x<n; x++){
    for(j=1; j<=20; j++){
        if(fibo(j)==A[x]){
        C[x]=1;
        break;} } }
    for(t=0; t<n; t++){
        if(c[t]==1)
        printf("yes");
        else
        printf("no"); }
	return 0; }