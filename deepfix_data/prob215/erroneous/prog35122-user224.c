#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count;
	scanf("%d",&n);
	for(i=0,i<=n;i++)
	{if(n%i==0)
	count=count+i;
	else
	continue; }
	if(count==num)
	printf("YES");
	else
	printf("NO");
	return 0; }