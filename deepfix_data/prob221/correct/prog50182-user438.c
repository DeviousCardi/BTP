#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n-1;i++) {
	    printf("*");
	      for(j=1;j<=2*n-1;j++) {
	        printf(" "); }
	    printf("*");
	    printf("\n"); }
	return 0; }