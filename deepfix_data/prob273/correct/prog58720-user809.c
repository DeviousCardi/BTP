#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=h; i>=1; i--) {
	    for(j=1; j<=h; j++)
	    {   printf(" ");
	        printf("%d",i); }
	    printf("\n"); }
	return 0; }