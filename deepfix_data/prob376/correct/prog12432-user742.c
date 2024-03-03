#include <stdio.h>
#include <stdlib.h>
int cat(int k)
{ if(k==0)
   return 1;
  return cat(k-1)*(4*k - 2)/(k+1); }
int main() {
	int i, t, k, c;
	scanf("%d", &t);
	for(i=0; i<t; i++)
    { scanf("%d", &k);
      c = cat(k);
      printf("%d\n", c); }
	return 0; }