#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    if((i!=1)&&(i!=h)) {
	        printf("*");
	        int j;
	        if(i<=(h/2)+1) {
	        for(j=2;(j<i);j++)
	            printf(" "); }
	        else
	            for(j=i;j>=3;j--)
	                printf(" ");
	        printf("*"); }
	    else
	        printf("*");
	    printf("\n"); }
	return 0; }