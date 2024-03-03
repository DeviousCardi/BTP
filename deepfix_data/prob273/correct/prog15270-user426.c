#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i=1,j=1;
	scanf("%d",&h);
	for(;i<=h;i++) {
	    for(j=1;j<=(h/2+1);j++){
	        if(j<(h/2-i+2))
	        printf(" ");
	        else
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }