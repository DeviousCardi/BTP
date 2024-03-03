#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b,c;
	scanf("%d",&n);
	printf("*");
	for(b=0;b<n/2-1;b++) {
	    printf("*"); {
	           for(c=0;c<b;c++)
	           printf(" "); }
	    printf("*");
	    printf("\n"); }
    for(b=0;b<n/2;b++) {
	    printf("*"); {
	           for(c=0;c<(n/2-b-1);c++)
	           printf(" "); }
	    printf("*");
	    printf("\n"); }
    printf("*");
	return 0; }