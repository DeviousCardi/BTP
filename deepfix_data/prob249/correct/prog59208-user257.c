#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf ("%d",&h);
	for (j=1;j<=(h+1)/2-1;j++) {
	    printf (" "); }
	printf ("*\n");
	for (i=2;i<=h;i++) {
	    if (i<=(h+1)/2) {
	      for (j=1;j<=(h+1)/2-i;j++) {
	          printf (" "); }
	      printf ("*");
	      for (j=1;j<=i-2;j++)
	          printf (" ");
	      printf ("*\n"); }
	    else {
	        for
	        (j=1;j<=i-(h+1)/2;j++) {
	            printf (" "); }
	        printf ("*");
	        for (j=1;j<=h-i-2;j++) {
	            printf (" "); }
	        printf ("*\n"); } }
	for (j=1;j<=(h+1)/2-1;j++) {
	    printf (" "); }
	printf ("*");
	return 0; }