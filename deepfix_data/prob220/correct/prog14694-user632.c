#include <stdio.h>
#include <stdlib.h>
int main() {
	         int n,i,j,k;
	       scanf("%d",&n);
	       for(i=1;i<=n;i++) {
	       for(j=1;j<=(n-1)+(i-1);j++)
	       if (j==(n-1)+(i-1) || j==(n-1)-(i-1))
	           printf("*");
	       else  {
	           printf(" "); }
	       printf("\n");
	       if (i==n)
	       {for(k=1;k<=(2*n-1);k++)
	       printf("*");
	       }}
	return 0; }