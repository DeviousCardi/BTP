#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,i,j;
	scanf("%d",&h);
	scanf("%d",&b);
	for(i=1; i<=h; i++){
	    for(j=1; j<=b; j++){
	        printf("%d", j); }
	    printf("\n"); }
	return 0; }