#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    printf("*");
	    for(space=(n-1)/2;space>i;space--)
	    printf(" ");
	    printf("*\n"); }
	return 0; }