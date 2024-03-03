#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    printf("*");
	    int j;
	    for(j=1;j<i;j++) {
	        printf(" ");
	        if(i>=h/2)
	            j=j-2; }
	    printf("*\n"); }
	return 0; }