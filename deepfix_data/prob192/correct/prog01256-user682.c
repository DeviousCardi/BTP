#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,m,j;
	scanf ("%d",&n);
	for (i=0;i<=(n/2);i++){
	    for (j=0;j<=n/2-i;j++){
	        printf (" "); }
	    for (m=1;m<=i;m++){
	        printf ("*"); }
	    printf ("\n"); }
	return 0; }