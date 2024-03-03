#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else
    return 2*(2*n+1)/(n+2)*cat(n-1);
    return 0; }
int main() {
	int i,t,k,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    if(k==cat(10))
	    printf("%d",cat(n-1)); }
	return 0; }