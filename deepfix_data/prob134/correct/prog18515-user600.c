#include <stdio.h>
#include <stdlib.h>
int B(int n, int k){
    if(n<k) return 0;
    if(k==0||n==k) return 1;
    else return B(n-1,k)+B(n-1,k-1); }
int main() {
	int i, j,b;
	scanf("%d",&b);
	for(i=0;i<=20;i++){
	    for(j=0;j<=i;j++){
	        if(B(i,j)==b){
	            printf("%d %d", i, j);
	            break; } }
	    if(j==21&&i==21) printf("-1"); }
	return 0; }