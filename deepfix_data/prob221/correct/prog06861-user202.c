#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	    printf("*");
	    printf("\n");
	for(i=1;i<n;i++){
	    for(j=0;j<i;j++)
	    printf(" ");
	    printf("*");
	    for(j=0;j<(n-i);j++)
	    printf(" ");
	    printf("*");
	    printf("\n"); }
	return 0; }