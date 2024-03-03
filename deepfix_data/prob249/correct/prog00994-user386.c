#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf ("%d",&n);
	for (i=1; i<=n; i=i+1) {
	    printf ("*");  }
	    printf ("\n");
	       for (j=1; j<=n-2; j=j+1)  {
	           	printf ("*\n");
	           for (k=1; k<=n-1; k=k+1)  {
	       if ((j==0) || (j==k))
	            printf ("*");
	       else printf (" "); } }
    printf ("*");
	return 0; }