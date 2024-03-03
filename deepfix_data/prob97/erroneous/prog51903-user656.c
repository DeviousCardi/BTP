#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n,i,j,,l;
	 scanf("%d",&n);
	   for(i=0;i<n;i++) {
      for(j=n-i;j>0;j--)
  printf("  ");
      for(k=n-i;k<=n;k++) {
  printf("%d ",k); }
    for(l=i+1;l<=n;l++){
        printf("%d",l); }
      printf("\n"); }
	return 0; }