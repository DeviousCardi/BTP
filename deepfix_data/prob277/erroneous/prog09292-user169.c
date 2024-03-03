#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
    scanf("%d",&h);
	for(i=0;i<h/2;i++) {
	   for(j=0;j<i;j++)
	   printf(" ");
	   for(k=0;k<(i-j);k++)
	   printf("*");
	   printf("\n"); }
	return 0; }