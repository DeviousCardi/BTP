#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(j=1;j<=n-1;j=j+1) {
	   for(i=n-j;i>0;i=i-1)
	   {printf(".");}
	    printf("*\n");
	    for(i=n-j+1;i<n+j-1;i=i+1)
   { printf(".");} }
	return 0; }