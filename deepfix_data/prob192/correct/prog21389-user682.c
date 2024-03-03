#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,m,j;
	scanf ("%d",&n);
	for (i=1;i<=2*n-1;i++){
	    for (j=1;j<=i;j++){
	    printf (" "); }
	for (m=1;m<=i;m++){
	printf ("*"); } }
	return 0; }