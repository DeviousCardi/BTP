#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i,j,k;
	scanf("%d",&n);
	a=2*n-1;
	for(i=1;i<=n;i++) {
	    for(k=1;k<=n-i;k++)
	    printf(" ");
	    if(k>n-i)k=k+1; {
	        if(k%2==0)
	        printf("*");
	        else
	        printf("x"); }
	    printf("\n"); }
	return 0; }