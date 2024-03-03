#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,k,n;
	scanf ("%d",&n);
	    printf ("\n");
	       for (j=1; j<=n-2; j=j+1)  {
	           for (k=1; k<=n-1; k=k+1)  {
	       if ((j==1) || (j==k))
	            printf ("*");
	       else printf (" "); }
    printf ("*\n");  }
    printf ("*");
	return 0; }