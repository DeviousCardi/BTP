#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf ("%d",&h);
	for (j=1;j<=(h+1)/2-1;j++) {
	    printf (" "); }
	printf ("*");
	for (i=2;i<=h;i++) {
	    for (j=1;j<=(h+1)/2-i;j++) {
	        printf (" "); }
	    printf ("*");
	    for (j=1;j<=i-2;j++) {
	        printf (" "); }
	    printf ("*\n"); }
	return 0; }