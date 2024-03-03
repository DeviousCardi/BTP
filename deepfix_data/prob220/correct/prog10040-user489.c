#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<h;i++) {
	    for(k=1;k<=(h-i);k++) {
	        printf(" "); }
	    printf("*");
	    if(i!=1) {
	        for(k=1;k<=(i-1);i++) {
	            printf(" "); }
	        printf("*"); }
	    printf("\n"); }
	if(i==h) {
	    for(k=1;k<=((2*h)-1);k++) {
	        printf("*"); } }
	return 0; }