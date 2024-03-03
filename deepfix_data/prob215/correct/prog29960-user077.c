#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n;
	scanf("%ld", &n);
	int i;
	double s=0;
	for (i=1;i<n/2;i++) {
	        if (n%i==0)
	            s=s+i; }
	if (s==n)
	    printf("YES");
	else printf("NO");
	return 0; }