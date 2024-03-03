#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,l,j,k,height;
	scanf ("%d", &height);
	for (i=1; i<=height; i=i+1) {
	    if (i<=(height+1)/2){
	for (k=1; k<=(height-3)/2; k=k+1) {
	    printf(" "); }
	for (j=1; j<=2*i-1; j=j+1){
	     printf ("%d", j+(height+1)/2-i); } }
	else {
	    for (l=1; l<=(i-(height+1)/2); l=l+1){
	        printf (" "); }
	   for (j=1; j<=(height-i)*2+1; j=j+1){
	       	     printf ("%d", height-i+j); } }
	printf ("\n"); }
	return 0; }