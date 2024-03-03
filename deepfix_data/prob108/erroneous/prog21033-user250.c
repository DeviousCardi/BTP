#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,
	scanf("%d",&h);
	int i;
	for(i=1;i<=(h+1)/2;i++)
	{ int j;
	    for(j=1;j<=i;j++) {
	    if((j==1)||(j==i))
	        printf("*");
	    else
	        printf(" "); }
	    printf("\n") }
	for(i=(h-1)/2;i>=1;i--)
	 {int j;
	   for(j=1;j<=i;j++) {
	         if((j==1)||(j==i))
	        printf("*");
	    else
	        printf(" "); }
	    printf("\n") }
	return 0; }