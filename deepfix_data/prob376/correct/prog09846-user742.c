#include <stdio.h>
#include <stdlib.h>
int cat(int k)
{ if(k==0)
   return 1;
  int s=0, i;
  for(i=0; i<k; i++)
  { s += cat(i)*cat(k-i-1); }
  return s; }
int main() {
	int i, t, k, c;
	scanf("%d", &t);
	for(i=0; i<t; i++)
    { scanf("%d", &k);
      c = cat(k);
      printf("%d\n", c); }
	return 0; }