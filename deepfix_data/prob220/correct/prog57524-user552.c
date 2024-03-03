#include <stdio.h>
#include <stdlib.h>
int main() {
int h,i,j;
	scanf("%d",&h);
	for (i=1; i<=h; i++){
	    for (j=1; j<=h-i; j++){
	        printf(" "); }
	   if(i==(h))
	   for(j=1;j<=(2*i)-1;j++) {
	            if(j==1||j==(2*i)-1)
	            printf("*");
	            else
	            printf(" "); }
	    printf("\n"); }
	return 0; }