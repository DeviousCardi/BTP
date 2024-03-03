#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,height;
	scanf ("%d", &height);
	for (i=1; i<=height; i=i+1) {
	for (j=1; j<=i; j=j+1){
	    if (j>9) {
	    printf ("%d", j%10);}
	    else
	    printf ("%d", j); }
	printf ("\n"); }
	return 0; }