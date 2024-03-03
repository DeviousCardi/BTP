#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
	scanf("%d",&n)
	for(i=1;i<n;i++) {
	    for(j=n-1;j>0;j--) {
	        printf (" "); }
	    printf("*");
	    if(i>=2) {
	       for(j=1;j<=2*i-3;j++) {
	        printf (" "); }
	        printf("*"); }
	  printf("\n")  ; }
	for(i=1;i<=2*n-1;i++) {
	    pritnf("*"); }
	return 0; }