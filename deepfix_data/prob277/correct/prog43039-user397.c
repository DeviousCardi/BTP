#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<(height);i++) {
	  for(j=height-i+1;j<(height);j=j+1) {
	      printf("*"); }
	  printf("\n"); }
	return 0; }