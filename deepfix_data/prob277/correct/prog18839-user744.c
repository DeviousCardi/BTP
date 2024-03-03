#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n;
	scanf("%d",&n);
	k=(n+1)/2;
	for(i=1; i<=k; i++) {
	    for(l=1; l<i; l++)
	        printf(" ");
	    for(j=k-(2*i); j>=i; j--)
	        printf("*");
	    printf("\n"); }
	return 0; }