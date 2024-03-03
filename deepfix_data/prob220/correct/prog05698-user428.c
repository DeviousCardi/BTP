#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    for(j=1;j<=(n/2-i+1);j++) {
	         printf(" "); }
	     if(i>1)
	     printf("*");
	     for(j=1;j<=2*(i-1)-1;j++) {
	         printf(" "); }
	     printf("*");
	     printf("\n"); }
	for(k=1;k<=(2*n-1);k++)
	printf("*");
	return 0; }