#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,t;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	       printf("*");
	       printf("\n");
	for(t=2;t<=n;t++) {
	      for(j=1;j<=t-2;j++)
	          printf(" ");
	           printf("*");
	        for(k=1;k<=2*n-2*t-1;k++)
	             printf(" ");
	               printf("*");
	                printf("\n"); }
	return 0; }