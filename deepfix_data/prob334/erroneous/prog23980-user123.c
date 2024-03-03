#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k, n, b;
	scanf("%d%d",&n,&b );
	for(i=1; i<=n; i++) {
	    for(j=1; j<=n-i; j++) {
	        printf(" "); }
	    for(k=1, m=i; k<=b-2*(n-i+1); k++, m++) {
	        printf("%d", k%10); }
	    printf("\n"); }
	return 0; }