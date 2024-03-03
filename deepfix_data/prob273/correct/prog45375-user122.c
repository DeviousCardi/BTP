#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,x,s;
	scanf("%d",&n);
	x=n/2;
	int a=x+1;
	for(i=1;i<=x;i++) {
	  for(s=1;s<=x+1-i;++s)
	     printf(" ");
	     for(j=1;j<=a;++j)
	     printf("%d",j);
	     printf("\n"); }
	  for(i=x+1;i>=1;--i) {
	     for(s=0;s<=x-i;++s)
	      printf(" ");
	      for(j=1;j<=i;++j)
	       printf("%d",j);
	       printf("\n"); }
	return 0; }