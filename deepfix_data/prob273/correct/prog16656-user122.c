#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,x;
	int a=1;
	scanf("%d",&n);
	x=n/2;
	int b=x+1;
	for(i=1;i<=x;i++) {
	    for(j=1;j<=i;++j)
	     printf("%bd",a);
         a=a+1;
	     printf("\n"); }
	  for(i=x+1;i>=1;--i) {
	      for(j=1;j<=i;++j)
	       printf("%bd",b);
	       b=b+1;
	       printf("\n"); }
	return 0; }