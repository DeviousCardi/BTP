#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=((n+1)/2);i++) {
	    printf("*");
	    for (j=1;j<=i-2;j++) {
	        printf(" "); }
	    if (i!=1) {
	        printf("*");
	    printf("\n"); }
	    else printf("\n"); }
	    	for (i=((n-1)/2);i>=1;i--) {
	    printf("*");
	    for (j=i-1;j>=1;j--) {
	        printf(" "); }
	    if (i!=1) {
	        printf("*");
	    printf("\n"); }
	    else printf("\n"); }
	return 0; }