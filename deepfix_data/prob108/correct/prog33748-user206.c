#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	    printf("*");
	    int r;
	    for(r=0;r<i-1;r++) {
	        printf(" "); }
	    printf("*\n"); }
	return 0; }