#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,height;
	scanf ("%d", &height);
	for (i=height; i>=1; i=i-1) {
	for (k=1; k<=(height-i); k=k+1) {
	    printf(" "); }
	for (j=1; j<=height-i; j=j+1){
	 printf ("%d", j); }
	printf ("\n"); }
	return 0; }