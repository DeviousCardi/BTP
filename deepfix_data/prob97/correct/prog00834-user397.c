#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j;
	scanf("%d",&height);
	for(i=0;i<height;i++) {
	    for(j=i;j<height;j++) {
	        printf(" ");
	        if(j==height/2)
	        printf("%d",height); }
	    printf("\n"); }
	return 0; }