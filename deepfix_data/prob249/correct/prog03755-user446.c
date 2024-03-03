#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,x,i,j;
	scanf("%d",&h);
	x=(h+1)/2;
	for(i=x;i<x;i--) {
	    if (i<0)i=-i;
	    for(j=1;j<x+1;j++) {
	        if(j==i || j==x)printf("*");
	        else  printf(" "); } }
	return 0; }