#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,x,y;
	scanf("%d",&a);
	x=1;
	printf("*\n");
	for(x=0;x<=(a-3)/2;x++);{
        printf("*");
	    for(y=1;y<=x;y++){
	        printf(" "); }
	    printf("*");
	    printf("\n");
	     x=a;
        printf("\n"); }
	 printf("*");
	return 0; }