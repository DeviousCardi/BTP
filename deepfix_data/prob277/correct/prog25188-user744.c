#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,n;
	scanf("%d",&n);
    for(i=0; i<=n; i++) {
	    for(l=0; l<=i; l++)
	        printf(" ");
	    for(j=n-2; j>=i; j--)
	        printf("*");
	    printf("\n"); }
	return 0; }