#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++) {
	    printf("*"); }
	printf("\n");
	for(j=1;j<=n-1;j++) {
	    for(l=1;l<=j+1;l++) {
	        printf(" "); }
	    printf("*");
	    for(k=j;k<=2*n-j-2;k++) {
	        printf(" "); }
	    printf("*");
	    printf("\n"); }
return 0; }