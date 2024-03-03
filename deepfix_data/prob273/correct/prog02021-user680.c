#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=(n+1)/2;i>0;i--); {
	    for(j=i;j<=i+1;j++) {
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }