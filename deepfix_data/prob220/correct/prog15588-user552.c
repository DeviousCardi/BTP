#include <stdio.h>
#include <stdlib.h>
int main() {
int h,i,j,p;
	scanf("%d",&h);
	for (i=1; i<=h; i++){
	    for (j=1; j<=h-i; j++){
	        printf(" "); }
	   for(p= h-i+1;p<=h+i-1; p++) {
	            printf("%d",p%10); }
	    printf("\n"); }
	return 0; }