#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i++) {
	    for(j=1;j<=(n+1);j++) {
	        if(i+j<(n+2)||j-i+n<0)
	        printf(" ");
	        else if((i+j)%2!=0)
	        printf("x");
	        else
	        printf("*"); }
	printf("\n"); }
	return 0; }