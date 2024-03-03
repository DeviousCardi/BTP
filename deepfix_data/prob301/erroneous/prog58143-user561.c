#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf ("%d",&n);
	int a[n];
	int k[n];
	for (i=0;i<n;i++)
	scanf ("%d",&a[i]);
	for (j=0;j<n;j++) {
	    if (a[j]==a[j+1])
	    printf ("%d",a[j]);
	    break; } }
	return 0; }