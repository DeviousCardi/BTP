#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[21],i,n;
	int c=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	     scanf("%d",&a[i]); }
	    if ((a[0]>a[1]) || (a[n-1]>a[n-2])) {
	         printf ("Yes"); }
	    for (i=1;i<n-1;i++) {
	        if ((a[i]<=a[i-1]) || (a[i]<=a[i+1]))
	             c++; }
	if (c=(n-2))
	    printf ("No");
	else
	    printf ("Yes");
	return 0; }