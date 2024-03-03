#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<(n/2)+1;i++) {
	      for(k=0;k<i;k++)
	        printf(" ");
	      for(j=n-2*i;j>0;j--)
	        printf("*");
	   printf("\n"); }
	return 0; }