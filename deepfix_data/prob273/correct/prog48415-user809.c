#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=1; i<=h; i++) {
	    for(j=h; j>=1; j--)
	    {   printf(" ");
	        printf("%d",i); }
	    printf("\n"); }
	return 0; }