#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],c[500], n, i;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
	    if (a[i] + b[i] > 9) {
	        c[i] = a[i] + b[i] - 10;
	        c[i+1] = c[i+1] + 1 }
	    else {
	        a[i] + b[i] = c[i]; } }
	printf("%d",c[n]);
	return 0; }