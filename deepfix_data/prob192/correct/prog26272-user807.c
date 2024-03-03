#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(j=0;j<i;j++)
	 {if(j<i&&j<=(n-i))
	   {printf(" "); }
	 else
	    { printf("*"); }
	  }printf("\n");
	}return 0; }