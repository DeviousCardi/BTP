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
	    printf("*");
	for ( k=1 ;  k<(2*n-2*i) ; k++) {
	    printf (" ") ; }
	    printf("*");
	    for ( j= 1; j<i ; j++)  {
	        printf (" "); }
	    printf ("\n") ; }
	    for ( j= 1; j(<n-1) ; j++)  {
	        printf (" ");
	    }printf("*");
	return 0; }