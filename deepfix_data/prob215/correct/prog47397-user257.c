#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j=0;
	scanf ("%d",&n);
	int a[100];
	a[0]=0;
	for (i=1;i<n;i++) {
	    if (n%i==0)
	    a[i]=i;
	    else a[i]=0; }
	for (i=0;i<n;i++) {
	    j=j+a[i]; }
	if (j==n)
	printf ("YES");
	else printf ("NO");
	return 0; }