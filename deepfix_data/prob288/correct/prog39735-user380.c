#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n;
	scanf("%d",&n);
	 for(i=1;i<=n+1;i++) {
	     for(j=1;j<=n+1-i;j++)
	     printf(" ");
	     for(k=1;k<=j;k++)
	     printf("*");
	     for(l=1;l<=j-2;l++)
	     printf("x");
	     printf("\n"); }
	return 0; }