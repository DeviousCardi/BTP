#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	int i;
	int s=0;
	for (i=1;i*i<n;i++) {
	        if (n%i==0)
	            s=s+i; }
	if (s==n)
	    printf("YES");
	else printf("NO");
	return 0; }