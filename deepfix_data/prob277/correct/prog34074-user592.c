#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0;
	int j=0;
	int k=0;
	int n;
	scanf ("%d",&n);
	for (i=0;i<=n/2;i++){
	    for (j=1;j<=i;j++)
	    printf(" ");
	    for (k=0;k<n-2*i;k++)
	    printf ("*");
	    printf ("\n"); }
	for (i=n/2;i>=0;i--)
	    { for (j=2;j<=i;j++)
	    printf(" ");
	    for (k=0;k<n+3-2*i;k++)
	    printf ("*");
	    printf ("\n"); }
	return 0; }