#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++){printf("*");}
	printf("\n");
	for(j=1;j<n-1;j++){
	    for(i=1;i<=j;i++){printf(" ");}
	    printf("*");
	    for(i=1;i<=2*n-2*j-3;i++){printf(" ");}
	    printf("*");
	printf("\n"); }
	for(i=1;i<=j;i++){printf(" ");}
	    printf("*");
	return 0; }