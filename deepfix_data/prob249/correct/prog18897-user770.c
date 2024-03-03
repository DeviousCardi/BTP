#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
	for(i=n; i>0; i--) {
	    for(j=0; j<n; j++) {
	        if(j==i)
	        printf("%d",j);
	        else if(j==n)
	        printf("%d",j);
	        else
	        printf(" "); }
	 printf("\n"); }
	return 0; }