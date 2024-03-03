#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	 for(b=(n-1)/2;b>=1;b--) {
	     printf(" ");
	   for(a=1;a<=(n+1)/2;a++) {
	      printf("*\n"); } }
	for(c=(n-1)/2;c>=1;c--) {
	    for(d=1;d<=(n-1)/2;d++) {
	        printf(" "); }
	    printf("*\n"); }
	return 0; }