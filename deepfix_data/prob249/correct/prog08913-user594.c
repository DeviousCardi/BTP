#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++) {
	    for(j=1;j<=(n/2)+1-i;j++)
	    {printf(" ");}
	    printf("*");
	    for(k=0;k<=(n/2)+1-(2+j);k++)
	   { printf(" ");}
	   if((i==1)||(i==9)) break;
	    printf("*");
		printf("\n"); }
	return 0; }