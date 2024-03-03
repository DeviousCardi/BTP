#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=(1-h)/2;i<(1+h)/2;i++) {
	           for(j=0;j<(h-1)/2;j++)
	                if((((i<0) ? -i:i)==j))
	                    printf("*");
	                else
	                    printf(" ");
	           printf("*\n"); }
	return 0; }