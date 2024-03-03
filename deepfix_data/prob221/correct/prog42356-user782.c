#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k ;
	scanf ("%d",&n) ;
	for (i=1 ; i<=2*n-1 ;i++){
	    printf ("*") ; }
	for (i=2 ; i<=n ; i++) {
         printf ("\n") ;
	    for ( j= 1; j<i ; j++)  {
	        printf (" "); }
	    printf("*");
	for ( k=1 ;  k<(2*n-2*i) ; k++) {
	    printf (" ") ;
	    }if(i!=n) {
	    printf("*"); }
	    for ( j= 1; j<i ; j++)  {
	        printf (" "); } }
	return 0; }