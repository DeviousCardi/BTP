#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	int i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    for(j=1;j<(h+1)/2;j++) {
	        if((i<=(h+1)/2)&&((j=(h+1)/2)||(j=(2*i+h-1)/2)))
	        printf("*");
	      if((i>(h+1)/2)&&((j=(h+1)/2)||(j=2*i-h+1)/2)))
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }