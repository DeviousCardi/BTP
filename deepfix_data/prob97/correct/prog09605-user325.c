#include <stdio.h>
#include <stdlib.h>
int main() {
	int t,n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ t=n;
	    for(j=1;j<(2*n-1);j++) {
	        if(j>t-i||j<t+1)
	        printf("%d",j);
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }