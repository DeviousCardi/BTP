#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf ("%d",&n);
	for (i=1; i<=n; i=i+1) {
	for (k=1; k<=(2*i-1); k=k+1) {
	for (j=1; j<=n-i; j=j+1) {
	printf (" "); }
	printf ("%d",i); }
	printf ("%d\n",i); }
	return 0; }