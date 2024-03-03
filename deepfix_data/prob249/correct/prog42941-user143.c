#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, k, h;
	scanf("%d",&n);
	h=n/2;
	for(i=1;i<=n;i++,h--) {
	    for(j=1;j<=h;j++) {
	        printf(" "); }
	    printf("*");
	    for(k=i-1;k>0;k--) {
	        printf(" "); }
	    printf("*");
	    printf("\n"); }
	return 0; }