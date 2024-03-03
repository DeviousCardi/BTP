#include <stdio.h>
#include <stdlib.h>
void space(int g)
{ int i;
  for (i=0;i<g;i++)
  printf(" "); }
int main() {
	int k, j, h, n;
	scanf("%d %d",&n,&h);
	for (k=1;k<=n;k++)
	{ space(n-k);
	 for(j=k;j<h*2+2*(1+k-n);j++)
	 printf("%d",j%10);
	 printf("\n"); }
	return 0; }