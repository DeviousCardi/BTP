#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,h ;
	scanf("%d",&h);
	for(i=0;i<2*h-1;i++)
	{printf("*");}
	printf("\n");
	for(k=1;k<h-1;k++) {
	    for(i=0;i<k;i++)
	    {printf(" ");}
	    printf("*");
	    for(k=h-1;k>0;k--) {
	        for(i=k;i<k+2*h-5;i++)
	        {printf(" ");} }
	    printf("*");
	    printf("\n"); }
	for(k=1;k<h;k++)
	{printf(" ");}
	 printf("*");
	return 0; }