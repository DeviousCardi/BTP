#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j,k;
	int space_count;
	int c_count=1;
	scanf("%d",&height);
	space_count=height-1;
	for(i=0;i<height;i++) {
	    for(k=0;k<space_count;k++) {
	        printf(" "); }
	    space_count--;
	    for(j=0;j<c_count;j++) {
	       printf("%d",(k+1)%10);
	       k++; }
	    printf("\n");
	    c_count+=2; }
	return 0; }