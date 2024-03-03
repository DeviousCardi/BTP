#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	k=(n-1)/2;
	for(i=1;i<=(n+1)/2;i++) { {
	    for(j=1;j<=(n+1)/2;j++) {
	        if(j<=k) {
	            printf("x"); }
	        else {
	            printf("%d",j); }
	    }k=k-1;
	  printf("\n"); } }
	for(i=1;i<(n+1)/2;i++) { {
	    for(j=1;j<=(n+1)/2;j++) {
	        if(j<=i) {
	            printf("x"); }
	        else
	        printf("%d",j); }
	  printf("\n"); } }
	return 0; }