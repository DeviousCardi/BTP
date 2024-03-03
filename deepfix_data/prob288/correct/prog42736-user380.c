#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,l,n;
	scanf("%d",n);
	 for(i=1;i<=2*n+1;i++) { {
	     for(j=1;j<=n-i;j++)
	     printf(" ");
	     for(k=1;k<=j;k++)
	     printf("*"); } }
	return 0; }