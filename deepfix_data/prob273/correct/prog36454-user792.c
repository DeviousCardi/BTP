#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++)
	{  printf("*");
	    for(b=(n-1)/2;b>=1;b--) {
	        printf("* ");
	        printf("\n"); } }
	for(c=(n-1)/2;c>=1;c--) {
	    for(d=1;d<=(n-1)/2;d++) {
	        printf(" ");
	        printf("*\n"); } }
	return 0; }