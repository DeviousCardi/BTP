#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n;
	scanf("%d",&n);
	k=(n+1)/2;
	for(i=1; i<=k; i++) {
	    for(l=1; l>i; l++)
	        printf(" ");
	    for(j=k; j>=i; j=j-2)
	        printf("*"); } }
	return 0; }