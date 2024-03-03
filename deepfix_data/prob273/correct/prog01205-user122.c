#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,x;
	scanf("%d",&n);
	x=n/2;
	for(i=1;i<=x;i++) {
	    for(j=1;j<=i;++j)
	     printf("%d",j);
	     printf("\n"); }
	  for(i=x+1;i>=1;--i) {
	      for(j=1;j<=i;++j)
	       printf("%d",j);
	       printf("\n"); }
	return 0; }