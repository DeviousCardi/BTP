#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h-1;i=i+1){
	    for(j=i;j<=2*i-1;j=j+1){
	        printf(" *"); }
	    printf("\n"); }
	return 0; }