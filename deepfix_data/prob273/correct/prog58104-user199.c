#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j;
	for(i=1;i<=(h+1)/2;i++) {
	    for(j=0;j<i;j++) {
	        int a=(h+1)/2-j;
	        printf("%ad",a); }
	    printf("\n"); }
	for(i=(h+1)/2;i>1;i=i-1) {
	    for(j=1;j<i;j++) {
	        int a=(h+1)/2-j+1;
	        printf("%ad",a); }
	    printf("\n"); }
	return 0; }