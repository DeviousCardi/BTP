#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,b;
	for(i=1;i<=(h+1)/2;i++) {
	    for(b=0;b<(h+1)/2-i;b++) {
	        printf(" "); }
	    for(j=i;j>0;j=j-1) {
	        int a=(h+1)/2-j+1;
	        printf("%d",a); }
	    printf("\n"); }
	for(i=(h+1)/2;i>1;i=i-1) {
	    for(b=0;b<i-2;b++) {
	        printf(" "); }
	    for(j=i-1;j>0;j=j-1) {
	        int a=(h+1)/2-j+1;
	        printf("%d",a); }
	    printf("\n"); }
	return 0; }