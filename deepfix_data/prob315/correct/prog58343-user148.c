#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j=0,k,l=0;
	scanf ("%d", &n);
	int a[n];
	int c[n];
	for (i=0;i<n;i++)
	scanf ("%d", &a[i]);
	for (i=0;i<(n-1);i++) {
	    l=0;
	    for (k=i+1;k<n;k++) {
	        if (a[i]>a[k]) {
	            j++;
	            l++; } }
	    c[i]=l; }
	printf ("%d\n",j);
	for (i=0;i<(n-1);i++)
	printf ("%d ",c[i]);
	printf ("%d",c[n-1]);
	return 0; }