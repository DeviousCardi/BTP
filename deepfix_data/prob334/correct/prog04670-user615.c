#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b;
	scanf("%d %d",&n,&b);
	int i,j,k,m=0;
	for(k=0;k<n;k++)
	{for(i=1;i<=n-1;i++)
	printf(" ");
	for(j=1;j<=(b-(2*n)+(m*2));j++)
	if(j<10)
	printf("%d",j);
	else printf("%d",j%10);
	printf("\n");
	m++; }
	return 0; }