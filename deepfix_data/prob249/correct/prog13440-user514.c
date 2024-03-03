#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    printf("*");
	    for(space=0;space<i;space++)
	    printf(" ");
	    printf("*\n"); }
	for(j=1;j=n+2;j++) {
	printf("*"); }
	return 0; }