#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,row,j;
	scanf("%d",&n);
	for(row=(1-n)/2;row<(1+n)/2;row++) {
	    for(j=0;j<(n-1)/2;j++)
	       if(j==((row>0) ? row : -row))
	            printf("*");
	       else
	            printf(" ");
	    printf("*\n"); }
	return 0; }