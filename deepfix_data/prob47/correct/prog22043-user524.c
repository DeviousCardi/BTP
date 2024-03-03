#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,cat,n,r;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++){
	scanf("%d\n",&t);
	n=n*i;
	r=r*i; }
	cat=(2*n)/(r*(n+1));
	printf("%d",cat);
	return 0; }