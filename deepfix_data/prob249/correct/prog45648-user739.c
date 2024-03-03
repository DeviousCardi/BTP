#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	int i,j;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    for(j=1;j<=i;j++)
	    {if((j=i-1)||(j=i))
	    printf("*");
	    else
	    printf(" ");}
	    printf("\n"); }
	return 0; }