#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<(height/2);i++)
	{ printf(" ");
	  for(j=i;j<(height);j++) {
	      printf("*"); }
	  printf("\n"); }
	return 0; }