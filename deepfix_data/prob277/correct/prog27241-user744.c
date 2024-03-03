#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,n,k;
	scanf("%d",&n);
	k=(n+1)/2;
    for(i=1; i<=k; i++) {
	    for(l=1; l<i; l++)
	        printf(" ");
	    for(j=((2*i)-1); j<=n;j++)
	        printf("*");
	    printf("\n"); }
	return 0; }