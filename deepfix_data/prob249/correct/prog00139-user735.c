#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, n, k;
	scanf("%d", &n);
	for(i=0; i<n/2+1; i++)
	{ for(j=1; j<=n/2+1; j++)
	  { if(j==n/2+1-i || j==5)
	     printf("*");
	    else
	     printf(" "); }
	  printf("\n"); }
	for(i=n/2; i>0; i--)
	{ for(j=n/2+1; j>0; j--)
	  { if(j==i || j==1)
	     printf("*");
	    else
	     printf(" "); }
	  printf("\n"); }
	return 0; }