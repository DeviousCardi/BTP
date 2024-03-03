#include <stdio.h>
#include <stdlib.h>
int main() {
	  int i,j,k,n;
	   scanf("%d",&n);
	   for(i=1;i<=n;i=i+1) {
	       for(j=1;j<=n-i;j=j+1)
	       printf(" ");
	       printf("*\n"); }
	       for(k=1;k<=i-1;k=k+1)
	       printf(" ");
	       printf("*");
	return 0; }