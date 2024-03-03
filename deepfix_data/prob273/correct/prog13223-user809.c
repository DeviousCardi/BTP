#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=1; i<=h; i++)
	{   printf(" ");
	    for(j=1; j<=i; j++) {
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }