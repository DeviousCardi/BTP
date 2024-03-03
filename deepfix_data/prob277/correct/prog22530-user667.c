#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=0;i<h/2+1;i++) {
	    for(j=0;j<=i;j++)
	    printf(" ");
	    for(j=0;j<h-2*i;j++)
	    printf("*");
	    printf("\n"); }
	for(i=0;i<h/2;i++) {
	    for(j=0;j<h/2-i;j++)
	    printf(" ");
	    for(j=0;j<2*i+1;j++)
	    printf("*");
	    printf("\n"); }
	return 0; }