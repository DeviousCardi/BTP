#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    j=1;
	    while((j>=(n+3)/2-i)&&(j<=(n-1)/2+i)) {
	            printf("*");
	            j++; }
	   printf("\n"); }
	return 0; }