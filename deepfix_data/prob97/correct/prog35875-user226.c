#include <stdio.h>
#include <stdlib.h>
int main() {
	int h=0,i=0,j=0;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    for(j=1;j<=h-i;j++) {
	     printf(" "); }
	    for(j=h-i;j<=h+i-2;j++) {
	        printf("%d",j+1); }
	    printf("\n"); }
	return 0; }