#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k ;
	for (i=1 ; i<=n ; i++) {
	    for ( j=0 ; j<=i ; j++)  {
	        printf (" "); }
	    printf ("*");
	    for ( k=9  ;  k>=i ; k--) {
	        printf (" ") ; }
	    printf ("*");
	    printf ("\n") ; }
	return 0; }