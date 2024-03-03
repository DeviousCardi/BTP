#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k ;
	scanf ("%d",&n) ;
	for (i=1 ; i<=2*n-1 ;i++){
	    printf ("*") ; }
	printf ("\n");
	for (i=2 ; i<=n-1 ; i++) {
	    for ( j= 1; j<i ; j++)  {
	        printf (" "); }
	for ( k=2*n-1  ;  k>=i ; k--) {
	    printf ("*") ; }
	    printf ("\n") ; }
	return 0; }