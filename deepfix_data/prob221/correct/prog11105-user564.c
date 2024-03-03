#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d", &n);
	for (i=1; i<=2*n-1; i++)
	    printf("*");
	printf("\n");
	for(i=1 ;i<=n-1;i++) {
	    for(j=1;j<=i;j++) {
	        printf(" "); }
	    printf("*");
	for (k=2*n-5; k>=1; k=k-2) {
	        printf(" "); }
	    printf("*"); }
	return 0; }