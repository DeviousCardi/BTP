#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++) {
	    for(i=1;((n+3)/2-j<=i)&&(i<=(n-1)/2+j);i++) {
	            printf("*"); }
	   printf("\n"); }
	return 0; }