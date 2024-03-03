#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,k,l,r;
	  scanf("%d",&n);
	  l=(n+1)/2;
	 k=l;
	  for(i=0;i<l;i++)
	  	  {k=k-1;
	  	      for(j=0;j<k;j++) {
                  printf(" "); }
                  for(r=j+1;r<=l;r++)
                  {int num=r%10;
                  printf("%d",num);
	  	  }l++;
	          printf("\n"); }
	return 0; }