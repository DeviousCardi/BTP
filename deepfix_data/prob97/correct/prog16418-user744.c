#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j,k;
	scanf("%d",&a);
	for(i=0; i<a; i--) {
	    for(j=0; j<i-1; j++) {
	        printf(" "); }
	    for(k=0; k<i+1; k++) {
	        printf("%d",j); } {
	    printf("\n"); } }
	return 0; }