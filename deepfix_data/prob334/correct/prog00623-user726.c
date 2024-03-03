#include <stdio.h>
#include <stdlib.h>
void space(int g)
{ int i;
  for (i=0;i<g;i++)
   printf(" "); }
int main() {
	int k, j, h, n, m;
	scanf("%d %d",&n,&h);
	m=h-2*(n-1);
	for (k=1;k<=n;k++) {
	  space(n-k);
	 for(j=k;j<=m;j++)
	  printf("%d",j%10);
	 printf("\n");
	 m+=3; }
	return 0; }