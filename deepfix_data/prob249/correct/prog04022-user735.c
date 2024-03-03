#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, n, k;
	scanf("%d", &n);
	for(i=1; i<=n/2+1; i++)
	{ for(j=i; j<n/2+1; j++)
	  { if(j==n/2-i || j==5)
	     printf("*");
	    else
	     printf(" "); }
	  printf("\n"); }
	return 0; }