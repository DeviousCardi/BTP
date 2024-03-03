#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k, l, count=0, n, eles[1000];
	scanf ("%d\n", &n);
	for (i=0; i<1000, i++)
	scanf ("%d ", &eles[i]);
	for (j=0; j<n; j++) {
	    for (k=j+1; k<n; k++) {
	        if(eles[j]>eles[k])
	        count = count+1; } }
	return 0; }