#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,height;
	scanf ("%d", &height);
	for (i=1; i<=height; i=i+1) {
	for (k=1; k<=height-i; k=k+1) {
	    printf(" "); }
	for (j=1; j<=2*i-1; j=j+1){
	    if (j+height-i>9) {
	        printf ("%d", (j+height-i)%10); }
	    else{
	    printf ("%d", j+height-i); } }
	printf ("\n"); }
	return 0; }