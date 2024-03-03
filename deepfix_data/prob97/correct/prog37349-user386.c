#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf ("%d",&n);
	for (i=1; i<=n; i=i+1) {
	for (j=n-i; j>=n-i; j=j-1) {
	printf (" "); }
	printf ("%d\n",i); }
	return 0; }