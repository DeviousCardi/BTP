#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,x,s;
	int a=1;
	scanf("%d",&n);
	x=n/2;
	int b=x+1;
	for(i=1;i<=x;i++) {
	  for(s=1;s<=x+1-i;++s)
	     printf(" ");
	     for(j=1;j<=i;++j)
	     printf("%d",a);
         a=a+1;
	     printf("\n"); }
	  for(i=x+1;i>=1;--i) {
	     for(s=0;s<n-i;++s)
	      printf(" ");
	      for(j=1;j<=i;++j)
	       printf("%d",b);
	       b=b+1;
	       printf("\n"); }
	return 0; }