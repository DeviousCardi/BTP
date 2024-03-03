#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l;
	scanf("%d",&l);
	for(i=1; i<=l; i++) {
	 if(i<=l/2+1) {
	            k=l/2-i+1; }
	 else {
	        k=i-l/2-1; }
	 for(j=1; j<=k; j++) {
	    printf(" "); }
	 for(j=j; j<=l/2+1; j++) {
	       printf("%d",j%10); }
	    printf("\n"); }
	return 0; }