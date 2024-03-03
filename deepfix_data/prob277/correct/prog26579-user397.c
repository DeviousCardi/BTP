#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<(height);i++) {
	  for(j=0;j<(height);j=j+1) {
	      printf("*");
	      printf(" "); }
	  printf("\n"); }
	return 0; }