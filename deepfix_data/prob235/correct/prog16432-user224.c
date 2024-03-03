#include <stdio.h>
#include <stdlib.h>
int main() {
	  int n,i,j,l,r,p;
	  scanf("%d",&n);
	  l=n/2;
	 	 p=l-1;
	  for(i=0;i<n;i++) {
	  	      for(j=0;j<=p;j++) {
                  printf(" "); }
                  for(r=j+1;r<=n;r++) {
                      int num=r%10;
                  printf("%d",num); }
	  	  if(i<(n/2))
	  	      p=p-2;
	  	      else
	  	      p=p+2;
	          printf("\n"); }
	return 0; }