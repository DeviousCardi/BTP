#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,m,j;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
	    for (j=1;j<=n-1;j++){
	    printf (" "); }
	for (m=1;m<=i;m++){
	printf ("*\n"); } }
	return 0; }