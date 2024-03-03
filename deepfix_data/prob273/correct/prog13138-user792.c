#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	    for(b=1;b<=a;b++)
	    { printf(" ");
	        for(e=a;e<=(n-1)/2;e++){
	        printf("*\n");} } }
	for(c=(n-1)/2;c>=1;c--) {
	    for(d=1;d<=(n-1)/2;d++) {
	        printf(" ");
	        printf("*\n"); } }
	return 0; }