#include <stdio.h>
#include <stdlib.h>
int towers(int n) {
	int count=0;
	  if(n==1) {
	    count++;
	      return count; }
	  towers(n-1); {
	 count++; }
	  towers(n-1); }
int main()
	{ int n;
	  scanf("%d",&n);
	  int a=towers(n);
	  printf("%d",a);
	  return 0; }