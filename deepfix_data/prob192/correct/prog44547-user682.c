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
	int k,l,o;
	for (k=n/2+1;(k<=n)&&(k>n/2+1);k++){
	    for (l=0;l<n/2+k;l++){
	        printf (" "); }
	    for (o=1;o<=2*k-1;o++){
	        printf ("*"); }
	    printf ("\n"); }
	return 0; }