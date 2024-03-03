#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	  for(b=(n-1)/2;b>=a;b--) {
	    printf(" "); }
	for(c=1;c<=2*a-1;c++) {
	 printf("*"); }
	printf("\n");}
	for(d=1;d<=(n-1)/2;d++) {
	    for(e=1;e<=d;e++) {
	        printf(" "); }
	    for(f=n-2;f>2*d-2;f++) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }