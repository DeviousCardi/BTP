#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==0) return 1;
    else return (2*((2*n)+1)*cat(n-1))/(n+2); }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    int n,sum=0;
	    scanf("%d",&n);
	    printf("%d",cat(n)); }
	return 0; }