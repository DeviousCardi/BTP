#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,i,j;
	scanf("%d",&h);
	scanf("%d",&b);
	for(i=0; i<h; i++){
	    for(j=0; j<b; j++){
	        printf("%c",(j+i)%10 +'1'); }
	    printf("\n"); }
	return 0; }