#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++) {
	    while((j>=(n+3)/2-i)&&(j<=(n-1)/2+i)) {
	            printf("*");
	                   j++; }
	   printf("\n"); }
	return 0; }