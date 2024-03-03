#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--) {
	  for(j=1;j<=2*n;j++) {
	     if(j<i) {
	         printf(" "); }
	     else {
	         printf("%d",j); } }
	  printf("\n"); }
	return 0; }