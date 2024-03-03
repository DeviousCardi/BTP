#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf ("%d",&n);
	for (i=1;i<=2*n-1;i++){
	    printf ("*"); }
	printf ("\n");
	for (i=2;i<=n-1;i++){
	    for (j=1;j<=i-1;j++){
	        printf (" "); }
	    printf ("*");
	    for (k=1;k<=2*n-2*i-1;k++){
	        printf (" "); }
	    printf ("*");
    printf ("\n"); }
	for (l=1;l<=n-1;l++){
	    printf (" "); }
	printf("*");
    return 0; }