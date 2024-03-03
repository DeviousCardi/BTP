#include <stdio.h>
#include <stdlib.h>
int main() {
	  int i,j,n;
	   scanf("%d",&n);
	   for(i=1;i<=n;i=i+1) {
	       for(j=1;j<=2*n-i;j=j+1) {
	       if(j==n+1-i||j==n+1+i)
	        printf("*");
	      else
	         printf(" "); }
	       printf("\n"); }
	return 0; }