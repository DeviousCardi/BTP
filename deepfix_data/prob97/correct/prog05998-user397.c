#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	int i,j,k,space_count;
	int c_count=1;
	scanf("%d",&height);
	space_count=height/2;
	for(i=0;i<=height/2;i++) {
	    for(k=0;k<space_count;k++) {
	        printf(" "); }
	    space_count--;
	    for(j=0;j<c_count;j++) {
	       printf("5"); }
	    printf("\n");
	    c_count+=2; }
	return 0; }