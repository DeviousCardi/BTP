#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m;
	scanf("%d",&h);
	for(i=1;i<h;i++) {
	    for(k=1;k<=(h-i);k++) {
	        printf(" "); }
	    printf("*");
	    if(i!=1) {
	        for(l=1;l<=(i-1);i++) {
	            printf(" "); }
	        printf("*"); }
	    printf("\n"); }
	if(i==h) {
	    for(m=1;m<=h;m++) {
	        printf("*"); } }
	return 0; }