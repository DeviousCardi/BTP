#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a, i=1,k,l,j;
	scanf("%d",&n);
	a=2*n-1;
	for(k=1;k<=a;k++)
	printf("*");
	printf("\n");
	for(l=1;l<n;l++) {
	for(i=1;i<=a;i++) {
	    if (i==l+1)
	    printf("*");
	    if (i==a-l-1)
	    printf("*");
	    else
	    printf("1"); }
	    printf("\n"); }
	return 0; }