#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    printf("*");
	    if(i==0||i==h)
	    continue;
	    else {
	        if(i<=h/2+1)
	        for(j=0;j>i-2;j++)
	        printf(" ");
	        else
	        for(j=0;j>h-i-1;j++)
	        printf(" ");
	        printf("*"); }
	return 0; }