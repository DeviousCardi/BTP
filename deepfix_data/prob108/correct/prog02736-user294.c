#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,x,y;
	scanf("%d",&a);
	x=1;{
	printf("*"); }
	for(x=2;x<=a-1;x++); {
	    for(y=1;y<=x;y++){
	        printf("*"); }
	    for(y=3;y<=(a-3)/2;y++){
	        printf(" "); }
	    for(y=(a-3)/2;y<=x-3;y++){
	        printf(" "); }
	    for(y=2;y<=x-2;y++){
	        printf("*"); }
	    x=a;
	    printf("*");
	    printf("\n"); }
	return 0; }