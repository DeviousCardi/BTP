#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i=i+1) {
	    for(j=2;j<=i;j++)
	        printf("a");
	    for(j=n-2*i+2;j>=1;j=j-1)
	        printf("*");
	    printf("\n"); }
	for (i=n/2;i>=1;i=i-1) {
	      for(j=i-1;j>=1;j=j-1)
	        printf("a");
	       for(j=n-2*i+2;j<=n;j=j+1)
	       printf("*");
	       printf("\n"); }
return 0; }