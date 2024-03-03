#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a,i,j;
	scanf("%d",&n);
	a=2*n+1;
	for(i=1;i<=a;i=i+1) {
	    for(j=1;j<=((i+1)/2);j=j+1) {
	        if(j%2==0)
	        printf("x");
	        else
	        printf("*"); }
	   for(j=((i+2)/2);j<=i;j--) {
	       	if(j%2==0)
	        printf("x");
	        else
	        printf("*"); }
	   printf("\n"); }
	return 0; }