#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	       printf("*");
	       printf("\n");
	 for(j=1;j<=i;j++)
	       printf(" ");
	       printf("*");
	   for(k=i;k<=n-i+1;k++)
	       printf(" ");
	       printf("*");
	return 0; }