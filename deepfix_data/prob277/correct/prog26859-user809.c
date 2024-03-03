#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=h; i>=1; i=i-2)
	{for(j=1; j<=i; j=j+1) {
	     printf("*"); }
	 printf(" ");
	 printf("\n"); }
	return 0; }