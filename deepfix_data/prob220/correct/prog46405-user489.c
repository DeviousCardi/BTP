#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    if(i==h) {
	        for(k=1;k<=((2*h)-1);k++) {
	            printf("*"); } }
	    else {
	    for(k=1;k<=(h-i);k++) {
	        printf(" "); }
	    printf("*");
	    if(i!=1) {
	        for(k=1;k<=((2*i)-1);k++) {
	            printf(" "); }
	        printf("*"); }
	    printf("\n"); } }
	return 0; }