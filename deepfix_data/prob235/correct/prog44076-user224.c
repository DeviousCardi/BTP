#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,l,p;
	  scanf("%d",&n);
	  l=(n+1)/2;
	 	 p=0;
	  for(i=1;i<=n;i++) {
	  	      for(j=1;j<l-p;j++)
	  	      printf(" ");
	  	      for(j=l-p;j<=l+p;j++)
	  	      printf("%d",j%10);
	          l++;
	          printf("\n"); }
	return 0; }