#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(j=1;j<=n-1;j=j+1) {
	   for(i=n-j;i>0;i=i-1)
	   {printf(" ");}
	    printf("*");
	    if(j!=1) {
	    for(i=n+2-j;i<n-1+j;i=i+1)
	    {printf(" ");}
	    printf("*\n"); }
	else printf("\n");}
	   for (k=1;k<=2*n-1;k=k+1)
	   { printf("*");}
	return 0; }