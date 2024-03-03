#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf ("%d",&h);
	for (i=1;i<=h;i++) {
	    if (i<=(h+1)/2) {
	        for (j=1;j<=(h+1)/2-i;j++) {
	            printf (" "); }
	        for (j=1;j<=2*i-1;j++)
	        printf ("*"); }
	    else {
	        for (j=1;j<=h-i;j++) {
	            printf (" "); }
	        for (j=1;j<=2*(h-i)+1;j++)
	        printf ("*"); }
	    printf ("\n"); }
	return 0; }