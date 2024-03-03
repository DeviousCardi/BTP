#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
	for(i=n; i>0; i--) {
	    for(j=0; j<n; j++) {
	        if(j==i)
	        printf("*");
	        else if(j==n)
	        printf("*");
	        else
	        printf(" "); }
	 printf("\n"); }
	return 0; }