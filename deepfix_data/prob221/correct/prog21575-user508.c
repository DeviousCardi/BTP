#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,a;
	scanf("%d",&n);
	j=2*n-1;
	for(i=1;i<=j;i++)
	printf("*");
	printf("\n");
	for(a=1;a<=j;a++) {
	    printf(" ");
	    j=j-1; }
	return 0; }