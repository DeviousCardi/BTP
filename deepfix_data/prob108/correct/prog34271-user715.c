#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
	    for(j=(n-1)/2;j>=1;j--) {
	        if (i==j) printf("*");
	        else if((i+j)==(n-1)) printf("*");
	        else if (i!=j) printf(" "); }
	printf("*\n"); }
	return 0; }