#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	if(n%i==0)
	sum+=i;
	if(sum==n)
	 printf("YES");
	else
	 printf("NO");
	return 0; }