#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++)
	{for(b=(n-1)/2;b>=a;b--)
	printf(" "); }
	{for(c=1;c<=2*a-1;c++)
	printf("*");
	printf("\n");}
	return 0; }