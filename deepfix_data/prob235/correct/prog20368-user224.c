#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,l,p;
	  scanf("%d",&n);
	  l=(n+1)/2;
	 	 p=0;
	  for(i=1;i<=(n+1)/2;i++) {
	  	      for(j=1;j<l-p;j++)
	  	      printf(" ");
	  	      for(j=l-p;j<=l+p;j++)
	  	      printf("%d",j%10);
	          p++;
	          printf("\n"); }
	  	  p=n-1;
	  	  int k=1;
	  	  for(i=n-1;i>=n-(n+1)/2;i--) {
	  	      for(k=1;k<=l-p;k++)
	  	      printf(" ");
	  	      for(k=l-p;k<=l+p;k++)
	  	      printf("%d",k%10);
	  	      p--;
	  	      printf("\n"); }
	return 0; }