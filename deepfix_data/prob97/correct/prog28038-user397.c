#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<height;i++) {
	    for(j=(height-i)/2;j<height;j++) {
	        printf("%d",height); }
	    printf("\n"); }
	return 0; }