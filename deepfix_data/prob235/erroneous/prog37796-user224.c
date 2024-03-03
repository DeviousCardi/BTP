#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,k;
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  	  {for(j=1;j<=n+i-1;j++)
                  k=j%10;
                  if(j<n-i+1)
                  printf("");
                  else
	          printf("%d",k);
	          k=j%10; }
	          printf("\n"); }
	return 0;