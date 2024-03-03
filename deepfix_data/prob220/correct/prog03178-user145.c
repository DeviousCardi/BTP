#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h,x,p;
	scanf("%d",&h);
	x=h;p=0;
	for(i=1;i<=h;i++) {
	    for(j=1;j<x;j++) {
	        printf(" "); }
	    x--;
	    printf("*");
	    for(k=1;k<=p;k++) {
	        printf(" "); }
	    p++;
	    if(i>1)
	    {printf("*");} }
	return 0; }