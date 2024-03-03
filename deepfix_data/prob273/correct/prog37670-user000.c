#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=(n+1)/2;i++) {
	    for(j=i;j<=(n-1)/2;j++) {
	        printf(" "); }
	    for(k=(n+1)/2-i+1;k>=1;k--) {
	        printf("%d",k); }
	    printf("\n"); }
	return 0; }