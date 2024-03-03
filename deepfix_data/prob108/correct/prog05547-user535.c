#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k;
    scanf("%d",&h);
	for(i=1;i<=(h+1)/2;i++) {
	    printf("*");
	    for(j=1;j<=(i-2);j++) {
	        printf(" "); }
	    if(i>1) {
	        printf("*"); }
	    printf("\n"); }
	for(i=(h+1)/2+1;i<=h;i++) {
	    printf("*");
	    for(j=1;j<=((h+1)/2)-(h-i);j++) {
	        printf(" "); }
	    if(i!=9) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }