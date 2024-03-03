#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,height;
	scanf ("%d", &height);
	for (i=1; i<=height; i=i+1) {
	    if (i<=(height+1)/2){
	for (k=1; k<=height-i; k=k+1) {
	    printf(" "); }
	for (j=1; j<=2*i-1; j=j+1){
	     printf ("%d", j+(height+1)/2-i); } }
	else {
	    for (k=1; k<=(height-i); k=k+1){
	        printf (" "); }
	   for (j=1; j<=i+1; j=j+1){
	       	     printf ("%d", height-i+j); } }
	printf ("\n"); }
	return 0; }