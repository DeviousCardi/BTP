#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=(2*n-1);j++) {
	        if(i==n)
	        printf("*");
	        else {
	            if(j>n)
	             continue; {
	                 if(j==i||j==n-i)
	                 printf("*");
	                 else
	                 printf(" "); } } }
	             printf("\n"); }
	return 0; }