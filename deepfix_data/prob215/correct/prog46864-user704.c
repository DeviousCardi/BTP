#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum;
	scanf("%d",&n);
	sum=1;
	for(i=2;i<n;i++)
	{if(n%i==0)
	sum=sum+i; }
	if(sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }