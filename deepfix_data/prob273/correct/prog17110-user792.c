#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	      printf("*");
	      for(b=a;b>=1;b--) {
	     printf(" \n");
	      printf(" ");} }
	for(c=(n-1)/2;c>=1;c--) {
	     printf("*");
	    for(d=c;d>=1;d--) {
	        printf("\n");
	    printf(" ");} }
	return 0; }