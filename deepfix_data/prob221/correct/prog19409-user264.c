#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	       printf("*");
	       printf("\n");
	 for(j=1;j<=i-1;j++)
	       printf(" ");
	       printf("*");
	   for(k=1;k<=n-2;k++)
	       printf(" ");
	       printf("*");
	return 0; }