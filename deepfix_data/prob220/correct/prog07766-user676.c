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
	            if(j>n-1+i)
	             continue; {
	                 if(j==n+1-i||j==n-1+i)
	                 printf("*");
	                 else
	                 printf("a"); } } }
	             printf("\n"); }
	return 0; }