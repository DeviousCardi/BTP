#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=(2*j-1);j++)
	    {printf("*");
	    }if(n/2<j)
	    {break;
	    }printf("\n"); }
	return 0; }