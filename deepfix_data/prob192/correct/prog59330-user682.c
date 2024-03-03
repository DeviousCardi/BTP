#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf ("%d",&n);
	for (i=1;i<=(n/2);i++){
	    for (j=1;j<=n/2+1-i;j++){
	        if (i%2==1)
	        printf ("*"); }
	    printf ("\n"); }
	return 0; }