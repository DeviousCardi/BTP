#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<+(n+1)/2;i++)
	{for(k=0;k<i;k++)
	printf(" ");
	for(j=1;j<=n-2*i;j++)
	printf("*");
	printf("\n");}
	for(i=(n-1)/2;i>0;i--)
	{for(k=i;k>0;k--)
	printf(" ");
	for(j=n-2*i;j>=1;j--)
	printf("*");
	printf("\n");}
	return 0; }