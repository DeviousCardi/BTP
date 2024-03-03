#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=2*n+1;i++) {
	for (j=1;j<=n;j++) {
	    if (j<n-i)
	    printf (" ");
	    if ((i+j)%2==0)
	    printf ("%c",'x');
	    else { printf ("%c",'*');} }
	    printf ("\n"); }
	return 0; }