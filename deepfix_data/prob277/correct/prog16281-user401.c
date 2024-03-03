#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<+(n+1)/2;i++)
	{for(k=0;k<i;k++)
	printf(" ");
	for(j=1;j<n-2*i;j++)
	printf("*");
	printf("\n");}
	return 0; }