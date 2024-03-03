#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    if((i!=1)&&(i!=h)) {
	        printf("*");
	        int j;
	        for(j=2;(j<i)&&(j>0);j++) {
	            if(j>h/2)
	                j=j-2;
	            printf(" "); }
	        printf("*"); }
	    else
	        printf("*");
	    printf("\n"); }
	return 0; }