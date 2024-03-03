#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	j=(n+1/2);
	for(i=1;i<=j;i++)
	{for(k=0;k<j-i;k++)
	       {printf(" "); }
	  printf("*") ;
	 for(k=i-2;k>0;k++)
	          {printf(" "); }
	  printf("*"); }
	return 0; }