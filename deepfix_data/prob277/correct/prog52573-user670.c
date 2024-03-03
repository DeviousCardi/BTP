#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count=3;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i=i+1) {
	    for(j=2;j<=i;j++)
	        printf(" ");
	    for(j=n-2*i+2;j>=1;j=j-1)
	        printf("*");
	    printf("\n"); }
	for (i=(n-1)/2;i>=1;i=i-1) {
	      for(j=i-1;j>=1;j=j-1)
	        printf(" ");
	       for(j=1;j<=count;j++)
	        printf("*");
	        printf("\n");
	       count=count+2; }
return 0; }