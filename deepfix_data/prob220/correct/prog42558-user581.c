#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=(n*2-1);j++)
	    if((j*i)%n==0)
	    {printf("*");}else {
	       printf(" "); }
	printf("\n");}
	return 0; }