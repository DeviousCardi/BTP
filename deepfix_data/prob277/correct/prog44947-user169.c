#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k;
    scanf("%d",&h);
	for(i=0;i<(h+1)/2;i++) {
	   for(j=0;j<i;j++)
	   { printf(" "); }
	   for(k=0;k<i;k++)
	   { printf("*"); }
	   printf("\n"); }
	return 0; }