#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,k,z=0;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    for(j=0;j<n/2;j++) {
	        printf(" "); }
	    for(k=0;k<i+z;k++,z=z+2) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }