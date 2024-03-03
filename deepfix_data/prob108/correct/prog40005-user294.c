#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,x,y;
	scanf("%d",&a);
	x=1;
	printf("*");
	for(x=2;x<=a-1;x++);{
	    for(y=1;y<x;y++){
	        printf("*"); }
	        printf("\n");
	    for(y=3;y<=x-3;y++){
	        printf(" "); }
	    for(y=2;y<=x-2;y++){
	        printf("*"); }
	    printf("\n"); }
	     x=a;{
	     printf("*"); }
        printf("\n");
	return 0; }