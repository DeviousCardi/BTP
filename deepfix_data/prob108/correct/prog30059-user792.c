#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	printf("*\n");
	for(a=1;a<=(n+1)/2;a++) {
	    printf("*");
	    for(b=a;b>1;b--) {
	        printf(" "); }
	    printf("*");
	    printf("\n"); }
	 for(c=(n-3)/2;c>=1;c--) {
	     printf("*");
	     for(d=c;d>1;d--) {
	         printf(" "); }
	     printf("*");
	 printf("\n"); }
	 printf("*");
	return 0; }