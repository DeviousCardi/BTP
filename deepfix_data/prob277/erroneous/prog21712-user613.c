#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	    for(b=1;b<a;b++) {
	        printf(" "); }
	for(c=n-2*a+2;c>=1;c=c-1) {
	    printf("*"); }
	    printf("\n"); }
	for(d=1;d<=(n-1)/2;d++) {
	    for(e=(n-3)/2;e<=d;e--) {
	        printf(" "); }
	    for(f=1;f<=2*d+1;f++) {
	        printf("*"); } }
	return 0; }