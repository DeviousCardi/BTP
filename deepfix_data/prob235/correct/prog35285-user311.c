#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
	for(i=1;i<=h;i++) { {
	        if(i%2)
	        m=(h-i-1)/2;
	        else  m=(h-i)/2;
	        for(j=m;j>=0;j=j-1) {
	            for(k=1; k<=j;k++)
	            printf(" "); }
	    printf("\n"); } }
	return 0; }