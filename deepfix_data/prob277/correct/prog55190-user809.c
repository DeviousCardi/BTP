#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,k,m;
	scanf("%d",&h);
	for(i=h; i>=1; i=i-2) {
	     for(j=1; j<=i; j=j+1) {
	        printf("*"); }
	     printf("\n");
	     printf(" "); }
	for(k=h-2; k>=1; k=k-2) {
	     for(m=1; m<=i; m=m+1) {
	        printf("*"); }
	     printf("\n");
	     printf(" "); }
	return 0; }