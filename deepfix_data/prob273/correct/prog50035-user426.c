#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i=1,j=1;
	scanf("%d",&h);
	for(;i<=h;i++){
	    for(;j<=(h/2);j++){
	        if(j<(h/2-i+1))
	        printf(" ");
	        else
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }