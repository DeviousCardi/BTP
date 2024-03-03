#include <stdio.h>
#include <stdlib.h>
int cat(n)
{ int i;
  if(n==0)
  return i=1;
  i=( (2*((2*n)+1))/(n+2) )*cat(n-1);
   return i; }
int main() {
	printf("%d",cat(10));
	return 0; }