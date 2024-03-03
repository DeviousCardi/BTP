#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,j;
	scanf ("%d",&n);
	int a[k];
	if (n<0) printf ("invalid"); else {
	    a[0]=1;k=0;
	    for (i=2;i<n;i++) {
	        if (n%i==0) {
	            k++; a[k]=i; } }
	    j=0;
	    for (i=0;i<=k;i++) {
	        j=j+a[i]; }
	    printf ("%d",j); }
	return 0; }