#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,k;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    for(j=0;j<n/2;j++) {
	        printf(" "); }
	    for(j=0;k<i;k++) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }