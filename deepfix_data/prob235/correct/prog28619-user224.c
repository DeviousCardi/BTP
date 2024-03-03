#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,k,m;
	  scanf("%d",&n);
	  k=(n/2)+n%2;
	  k=m;
	  for(i=0;i<n;i++)
	  	  {for(j=0;j<=m;j++)
	          printf("%d",k);
	          k++;
	          printf("\n"); }
	  	  k--;
	  	  m=m+2;
	return 0; }