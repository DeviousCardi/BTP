#include <stdio.h>
#include <stdlib.h>
int main() {
	int b;
	scanf("%d",&b);
	int i,j,k;
	for(i=1;i<=(b+1)/2);i++) {
	      for(j=1;j<(b+1)/2;j++) {
	          printf(" "); }
	      for(k=(((b+1)/2))-(i-1));k<=5;k++)
	        {printf("%d ",k); }
	        printf("\n"); }
	return 0; }