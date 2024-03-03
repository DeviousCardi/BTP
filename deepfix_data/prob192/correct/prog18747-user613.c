#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{for(j=1;j<=i;)
	{if(j<i/2.0)
	j=j+2;
	else j=n-2;
	printf("*"); }
	printf("/n");}
	return 0; }