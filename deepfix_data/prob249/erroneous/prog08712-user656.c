#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k;
	scanf("%d",&n);
	  for(i=1;i<=n;i++){
	     if(i<=(n+1)/2)
	      { for(k=1;k<=i;k++) {
	          if((k==1)||(k==i))
	      printf("*");
	      else
	      printf(" "); }
	      printf("\n"); }
	      else {
	          for(k=1;k<=n-i+1;k++) {
	              if((k==1)||(j==n-i+1))
	              printf("*");
	              else
	              printf(" "); }
	          printf("\n"); } }
	return 0; }