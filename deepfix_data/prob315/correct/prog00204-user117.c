#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k, l, count=0, n, eles[1000], b[1000],y ;
	scanf ("%d\n", &n);
	for (i=0; i<1000; i++)
	scanf ("%d ", &eles[i]);
	for (j=0; j<n; j++) {
	    for (k=j+1, i=0; k<n; k++, i++) {
	        if(eles[j]>eles[k])
	        count = count+1;
	        b[i]= count; } }
	printf ("%d\n", count);
	for (l=0; l<n; l++)
	printf ("%d ", b[l]);
	return 0; }