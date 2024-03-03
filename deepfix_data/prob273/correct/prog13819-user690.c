#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	k=(n-1)/2;
	scanf("%d",&n);
	for(i=1;i<=n;i++) { {
	    for(j=1;j<=(n+1)/2;j++) {
	        if(j<=k) {
	            printf(" "); }
	        else {
	            printf("%d",j); }
	    }k=k-1;
	  printf("\n"); } }
	return 0; }