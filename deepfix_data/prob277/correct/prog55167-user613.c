#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,n;
	scanf("%d",&n);
	for(a=1;a<=(n+1)/2;a++) {
	    for(b=1;b<a;b++) {
	        printf(" "); }
	for(c=n-a+1;c>=1;c=c-1) {
	    printf("*"); }
	    printf("\n"); }
	return 0; }