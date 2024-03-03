#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
	    printf("*");}
	{printf("\n");
	for(j=0; j<=1; j++)
	printf(" ");
	for(k=0; k<=j-2; k++)
	printf("*");
	printf("\n"); }
	return 0; }