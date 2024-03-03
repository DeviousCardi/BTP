#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a, i=1, j,k,l;
	scanf("%d",&n);
	a=2*n-1;
	for(k=1;k<=a;k++)
	printf("*");
	printf("\n");
	for(l=1;l<=n;l++) {
	for(i=1;i<=a;i++) {
	    if (i==l)
	    printf("*");
	    if (i=a-l)
	    printf("*");
	    else
	    printf(" "); }
	    printf("\n"); }
	return 0; }