#include <stdio.h>
#include <stdlib.h>
int Bin(int n, int k)
{ if(n<k) return 0;
  if(n==0 && k==0) return 1;
  if(k==0) return 1;
  return Bin(n-1, k) + Bin(n-1, k-1); }
int main() {
	int i, j, b, val;
	scanf("%d", b);
	for(i=0; i<=20; i++)
	   { for(j=0; j<=i; j++)
	     { val = Bin(i, j);
	       if(val==b)
	          { printf("%d %d" i, j);
	            return 0; } } }
	printf("-1");
	return 0; }