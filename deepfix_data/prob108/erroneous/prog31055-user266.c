#include <stdio.h>
#include <stdlib.h>
int main() {
	int
	scanf("%d",&h);
	med=(h+1)/2;
	for(i=1;i<=med;i++) {
	    printf("*");
	    for(j=0;j<=i+2-med;j++) {
	        printf(" "); }
	    printf("*\n"); }
	for(i=1;i<=med-1;i++) {
	    printf("*");
	    for(j=med-3-i;j>=0;j--) {
	        printf(" "); }
	    printf("*\n"); }
	return 0; }