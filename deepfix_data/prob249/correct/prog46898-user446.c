#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,x,i,j,s;
	scanf("%d",&h);
	x=(h-1)/2;
	for(i=x;i>=-x;i--) {
	    if (i<0)s=-i;
	    else  s=i;
	    for(j=0;j<=x;j++) {
	        if(j==s || j==x)printf("*");
	        else  printf(" "); }
	    printf("\n"); }
	return 0; }