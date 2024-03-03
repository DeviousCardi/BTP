#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    if(i<(n/2)+2)
	      {for(k=0;k<i;k++)
	        printf(" ");
	       for(j=n-i;j>0;j-=2)
	        printf("*"); }
	   printf("\n"); }
	return 0; }