#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    if(i<=(h+1)/2) {
	        for(j=i;j<(h+1)/2;j++)
	        { printf(" ");} }
	   else
	   for(j=i-(h+1)/2;j>=1;j--)
	   {printf(" ");}
	   if(i<=(h+1)/2)
	   for(k=(h+1)/2-i+1;k<=(h+1)/2+i-1;k++)
	   {printf("%d",k);}
printf("\n");}
	return 0; }