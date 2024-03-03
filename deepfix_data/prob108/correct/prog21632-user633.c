#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int j;
	int median;
	int n;
	int k;
	scanf("%d",&n);
	median=(n+1)/2;
	for(i=1;i<=n;i++)
	  {k=(median-abs(median-i));
	   for(j=1;j<=k;j++)
	     { if((j==1)||(j==k))
	           printf("*");
	       else
	           printf("  "); }
	    printf("/n"); }
	return 0; }