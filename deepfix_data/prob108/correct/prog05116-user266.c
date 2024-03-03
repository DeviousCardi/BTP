#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,med,i,j;
	scanf("%d",&h);
	med=(h+1)/2;
	for(i=1;i<=med;i++) {
	    printf("*");
	    if(i>2) {
	   for(j=1;j<=med+i-7;j++) {
	        printf(" "); } }
	    if(i!=1)
	        printf("*");
	       printf("\n"); }
	for(i=1;i<=med-1;i++) {
	    printf("*");
	    for(j=med-3-i;j>=0;j--) {
	        printf(" "); }
	    if(i!=med-1)
	        printf("*");
	    printf("\n"); }
	return 0; }