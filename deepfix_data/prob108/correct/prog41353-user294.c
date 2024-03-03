#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,x,y;
	scanf("%d",&a);
	x=1;
	printf("*");
	for(x=2;x<=a-1;x++);{
        printf("*");
	    for(y=3;y<=x-3;y++){
	        printf(" "); }
	    printf("*");
	    printf("\n");
	     x=a;
        printf("\n"); }
	 printf("*");
	return 0; }