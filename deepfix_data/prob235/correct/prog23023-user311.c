#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
	j=(h-1)/2;
	for(i=1;i<=h;i++) {
	    if (j>=0) {
	        for(k=1;k<=j;k++)
	        printf(" "); }
	    j=j-1; }
	return 0; }