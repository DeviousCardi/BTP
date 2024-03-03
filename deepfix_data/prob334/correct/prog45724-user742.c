#include <stdio.h>
#include <stdlib.h>
int main() {
	int h, b, i, j;
	scanf("%d", &h);
	scanf("%d", &b);
	for(i=0; i<h; i++)
	   { for(j=0; j<h-i-1; j++)
	        printf(" ");
	     for(j=i+1; j<=(b-(h-i-1)*2); j++)
	        printf("%d", j);
	     printf("\n"); }
	return 0; }