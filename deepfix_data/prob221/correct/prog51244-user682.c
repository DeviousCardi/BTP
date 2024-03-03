#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf ("%d",&n);
	for (i=1;i<=2*n-1;i++){
	    printf ("*"); }
	printf ("\n");
	for (i=2;i<=n-1;i++){
	    for (j=1;j=n-2;j++){
	        printf (" "); }
	    for (k=1;k<=n-2;k++){
	        printf ("*"); } }
	return 0; }