#include <stdio.h>
#include <stdlib.h>
int cat(n) {
    int i,ans=0;
    if(n==0)
    return 1;
    else
    return (2(2*n+1)/(n+1)*cat(n-1); }
int main() {
	int t;
	scanf("%d",&t);
	int k,i;
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",cat(k+1)); }
	return 0; }