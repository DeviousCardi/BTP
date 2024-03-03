#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i=i+2)
	{for(j=1;j<=i;)
	{if(j<i/2.0)
	j=j+1;
	else
	j=j-1;}
	printf("*");
	printf("\n");}
	return 0; }