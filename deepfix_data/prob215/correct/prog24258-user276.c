#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,j;
	scanf ("%d",&n);
	k=0;
	int a[k];
	if (n<0) printf ("invalid"); else {
	    a[0]=1;
	    for (i=2;i<n;i++) {
	        if (n%i==0) {
	            k++; a[k]=i;
	        }printf ("%d\n",a[k]); } }
	return 0;}