#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, m, n,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
	    for(j=1; j<=n-i; j++) {
	        printf(" "); }
	    for(m=1,k=i; m<=2*i-1; m++,k++) {
	        printf("%d", k%10); }
	    printf("\n"); }
	return 0; }