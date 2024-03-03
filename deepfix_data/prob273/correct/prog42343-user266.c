#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,max;
	scanf("%d",&h);
	max=(h+1)/2;
	for(i=1;i<=max;i++) {
	    for(j=1;j<=max-i;j++) {
	        printf(" "); }
	    for(k=max-i+1;k<=max;k++) {
	        printf("%d",k%10); }
	    printf("\n"); }
	for(i=1;i<=max-1;i++) {
	    for(j=1;j<=i;j++) {
	        printf(" "); }
	    for(k=i+1;k<=max;k++) {
	        printf("%d",k%10); }
	    printf("\n"); }
	return 0; }