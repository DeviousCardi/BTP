#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=(n+1)/2;i++) {
	    for (j=1;j<=(n-1)/2;j++) {
	    if ((j=(n+1)/2)||(j=(n+1)/2)-i)
	    printf ("*");
	    else {printf (" ");}}
	    	printf ("\n"); }
	return 0; }