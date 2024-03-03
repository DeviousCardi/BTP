#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,x,i,j,s;
	scanf("%d",&h);
	x=(h+1)/2;
	for(i=x;i<x+1;i--) {
	    if (i<0)s=-i;
	    else  s=i;
	    for(j=1;j<x+1;j++) {
	        if(j==s || j==x)printf("*");
	        else  printf(" "); } }
	return 0; }