#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,n;
	scanf("%d",&n);
    for(i=1; i<=n; i++) {
	    for(l=1; l<i; l++)
	        printf(" ");
	    for(j=n-1; j>=i; j--)
	        printf("*");
	    printf("\n"); }
	return 0; }