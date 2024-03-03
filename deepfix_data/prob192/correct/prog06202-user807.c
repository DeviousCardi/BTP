#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	 {if(j>i&&j<=(n-i))
	   {printf(" "); }
	 else
	    { printf("*"); }
	  }printf("\n"); }
	return 0; }