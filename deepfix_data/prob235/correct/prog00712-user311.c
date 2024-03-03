#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
	for(i=1;i<=h;i++) { {
	        for(j=(h-i)/2;j>=0;j=j-1) {
	            for(k=j;k<=j;k++)
	            printf(" ");
	        for(l=j+1;l<=h-j-1;l++) {
	            printf("%d",l);
	        }}
	    printf("\n"); } }
	return 0; }