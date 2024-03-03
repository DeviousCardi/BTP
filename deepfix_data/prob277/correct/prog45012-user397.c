#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<(height);i++) {
	  for(j=i;j<height;j++)
	  {   if(j==1&&i==1)printf(" ");
	      printf("*"); }
	  printf("\n"); }
	return 0; }