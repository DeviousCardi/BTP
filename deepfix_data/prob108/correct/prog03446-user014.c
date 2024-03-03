#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    if((i!=1)&&(i!=h)) {
	        printf("*");
	        int j;
	        for(j=2;(j<i);j++) {
	            printf(" "); }
	        printf("*"); }
	    printf("\n"); }
	return 0; }