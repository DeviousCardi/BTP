#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    for(j=n-i;j>0;j--)
	    printf(" ");
	    printf("*");
	    for(k=1;k<2*i-1;k++)
	    printf(" ");
	    if(k==1)
	    printf("\n");
	    else
	    printf("*\n"); }
	return 0; }