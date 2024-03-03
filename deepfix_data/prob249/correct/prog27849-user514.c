#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n;
	scanf("%d",&n);
	printf("*");
	for(i=1;i<=n-1/2;i++) {
	    printf("*");
	    for(space=(n-i)/2;space>=0;space--)
	    printf(" ");
	    printf("*\n"); }
	return 0; }