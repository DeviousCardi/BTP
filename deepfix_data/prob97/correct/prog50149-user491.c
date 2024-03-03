#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j;
	scanf("%d",&h);
	for (i=1; i<=h; i++){
	    for (j=i; j<=2*i-1; j++){
	        printf(" ");
	        printf("%d", j); }
	    printf("\n"); }
	return 0; }