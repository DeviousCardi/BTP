#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,k,l,r,p;
	  scanf("%d",&n);
	  l=(n+1)/2;
	 k=l;
	 p=n-1;
	  for(i=0;i<n;i++)
	  	  {if(i<(n/2))
	  	      p=p-2;
	  	      else
	  	      p=p+2;
	  	      for(j=0;j<p;j++) {
                  printf(" "); }
                  for(r=j+1;r<=n;r++)
                  {int num=r%10;
                  printf("%d",num); }
	          printf("\n"); }
	return 0; }