#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--) {
	  for(j=1;j<=2*n;j++) {
	     if(j<i) {
	         printf(" "); }
	    else if (j<(2*n-1)) {
	         printf("%d",j%10); } }
	  printf("\n"); }
	return 0; }