#include <stdio.h>
#include <stdlib.h>
int main() {
	int height,c_count;
	int i,j,k,space_count=0;
	scanf("%d",&height);
	c_count=height;
	for(i=0;i<height/2;i++) {
	  for(k=0;k<=space_count;k++) {
	    printf(" "); }
	  space_count++;
	   for(j=0;j<c_count;j++) {
	    printf("*"); }
	    c_count-=2;
	    printf("\n"); }
	return 0; }