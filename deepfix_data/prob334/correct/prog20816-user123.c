#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, m, n;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
	    for(j=1; j<=i; j++) {
	        printf(" "); }
	    for(m=1; m<=2*(n-i)+1; m++) {
	        printf("%d", m%10); }
	    printf("\n"); }
	return 0; }