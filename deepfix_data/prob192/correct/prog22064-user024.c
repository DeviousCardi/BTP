#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d", &h);
	for(i=1;i<=h;i++) {
	 if(i<=(h+1)/2) {
	   for(j=1;j<=h;j++)
	   {if((((h+3)/2)-i)<=j||j<=(((h-1)/2)+i))
	   printf("*");
	   else
	   printf(" "); }
	   printf("\n"); }
	 else {
	     printf("error"); } }
	return 0; }