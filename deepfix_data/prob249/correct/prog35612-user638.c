#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++) {
	    for(j=n/2;j>=1;j--) {
	        if(j==i)
	        printf("*");
	        else printf(" "); }
	    printf("*\n"); }
	return 0; }