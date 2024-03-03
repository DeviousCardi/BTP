#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	k=(n-1)/2;
	for(i=1;i<=n;i++) { {
	    for(j=1;j<=(n+1)/2;j++) {
	        if(j<=k) {
	            printf("x"); }
	        else {
	            printf("%d",j); }
	    }k=k-1;
	  printf("\n"); } }
	return 0; }