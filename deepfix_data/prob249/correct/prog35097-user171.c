#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=0;i<=h;i++) {
	           for(j=4;j>0;j--)
	                if((i)==j||(i+1)/2==j)
	                    printf("*");
	                else
	                    printf(" ");
	           printf("*\n"); }
	return 0; }