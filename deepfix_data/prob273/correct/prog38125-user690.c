#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) { {
	    for(j=1;j<=(n+1)/2;j++) {
	        if(i+j<(n-1)/2) {
	            printf(" "); }
	        else {
	            printf("%d",j); } }
	  printf("\n"); } }
	return 0; }