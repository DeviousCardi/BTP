#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d", &h);
	int i,j,a,b,c;
	for (i=1;i<=(h+1)/2;i++) {
	        for (a=((h+1)/2)-i;i>=1;a--)
	            printf(" ");
	        for (b=1;b<=i;b++)
	            printf("%d",c=(h+1)/2-i+b);
	       printf("\n"); }
	return 0; }