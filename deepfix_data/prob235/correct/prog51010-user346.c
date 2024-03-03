#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,l;
	j=(n+1)/2;
	for (i=0;i<j;i++) {
	   for (k=1;k<(j-i);k++)
	   {printf(" "); }
	   for(l=j-i;l<=j+i;l++) {
	       printf("%d",l);
	   }printf("\n"); }
	return 0; }