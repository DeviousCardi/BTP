#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b;
	scanf("%d %d",&n,&b);
	int i,j,k,m=1;
	for(k=1;k<=n;k++)
	{for(i=k;i<=n-1;i++)
	printf(" ");
	for(j=k;j<=(b-(2*n)+(m*2)+k);j++)
	if(j<10)
	printf("%d",j);
	else printf("%d",j%10);
	printf("\n");
	m++; }
	return 0; }