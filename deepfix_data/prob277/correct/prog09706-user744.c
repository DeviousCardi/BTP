#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n;
	scanf("%d",&n);
    for(i=1; i<=n; i++) {
	    for(l=1; l<i; l++)
	        printf(" ");
	    for(j=k-(2*(i-1)); j>=i; j--)
	        printf("*");
	    printf("\n"); }
	return 0; }