#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
		scanf("%d",&h);
		k=h;
	for(i=0;i<h;i++) {
	    for(j=h;j<=k;j++)
	    {printf("%d",j); } }
	h=h-1;
	k=k+1;
	printf("\n");
	return 0; }