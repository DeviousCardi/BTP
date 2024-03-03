#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf ("%d",&n);
	for (i=1; i<=n; i=i+1) {
	        for (j=1; j<=n-i; j=j+1) {
            	printf (" "); }
	        for (k=(n+1-i); k<=(n-1+i); k=k+1) {
	    printf ("%d",k%10); }
	printf ("\n"); }
	return 0; }