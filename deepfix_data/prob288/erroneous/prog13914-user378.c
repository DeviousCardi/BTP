#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=2*n+1;i++)
	for (j=1;i<=j;j++) {
	    if ((i+j)%2==0)
	    printf ("%nc"'x');
	    else { printf ("%nc",'*');}
	    printf ("\n";) }
	return 0; }