#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	      printf("*");
	      for(b=1;b<=(n-1)/2;b++) {
	     printf(" "); } }
	for(c=(n-1)/2;c>=1;c--) {
	    for(d=(n-1)/2;d>=1;d--) {
	        printf("*"); }
	    printf("*\n"); }
	return 0; }