#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=0, space=0, i=0, j=0, c=1;
	scanf("%d", &n);
	space=0;
	c=n;
	for(i=2;i<((n+3)/2);i++) {
	    for(j=0;j<space;j++)
	    printf(" ");
	    for(j=0;j<c;j++)
	    printf("*");
	    c=c-2;
	    space=space+1;
	    printf("\n"); }
	c=1;
	space=n/2;
	for(i=0;i<((n+1)/2);i++) {
	    for(j=0;j<space;j++)
	    printf(" ");
	    for(j=0;j<c;j++)
	    printf("*");
	    c=c+2;
	    space=space-1;
	    printf("\n"); }
	return 0; }