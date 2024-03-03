#include <stdio.h>
#include <stdlib.h>
int main() {
    scanf("%d",&h);
	int h,i,j,k;
	for(i=1;i<=(h+1)/2;i++) {
	    printf("*");
	    for(j=1;j<=(i-2);j++) {
	        printf(" "); }
	    if(i>1) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }