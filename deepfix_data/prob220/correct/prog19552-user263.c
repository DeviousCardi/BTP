#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    for(j=n-1;j>=i;j--) {
	        printf (" "); }
	    printf("*");
	    if(i>=2) {
	       for(j=1;j<=2*i-3;j++) {
	        printf (" "); }
	        printf("*"); }
	  printf("\n")  ; }
	for(k=1;k<=2*n-1;k++) {
	    printf("*"); }
	return 0; }