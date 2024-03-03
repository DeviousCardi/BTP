#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<(height);i++) {
	  for(j=0;j<(height);j=j+1) {
	      printf("*"); }
	  printf("\n"); if((j==i)||(j==(height-i)))
	      printf(" "); }
	return 0; }