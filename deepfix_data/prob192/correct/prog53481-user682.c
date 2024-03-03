#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,m,j;
	scanf ("%d",&n);
	for (i=1;i<=(n/2+1);i++){
	    for (j=0;j<=n/2-i;j++){
	        printf (" "); }
	    for (m=1;m<=2*i-1;m++){
	        printf ("*"); }
	    printf ("\n"); }
	for (i=n/2+2;i<=n;i++){
	    for (j=1;j<=i-(n+1)/2;j++){
	        printf (" "); }
	    for (m=1;m<=2*(n-i)-1;m++){
	        printf ("*"); }
	    printf ("\n"); }
	return 0; }