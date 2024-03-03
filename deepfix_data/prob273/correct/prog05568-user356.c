#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	j=(n+1)/2;
	for(i=0;i<j;i++)
	{for(k=i;k>=0;k--)
	{printf("%d",j-k);
	}	printf("\n"); }
for(i=1;i<j;i++)
	{for(k=i+1;k<=j;k++)
	{printf("%d",k);
	}	printf("\n"); }
	return 0; }