#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,m,n,v;
    scanf("%d",&h);
	for(i=0;i<(h+1)/2;i++) {
	   for(j=0;j<i;j++)
	   { printf(" "); }
	   for(k=(h-2*i);k>0;k--)
	   { printf("*"); }
	   printf("\n"); }
	for(m=(h+1)/2;m<h;m++) {
	    for(n=(h-m-1);n>0;n--) {
	        printf(" "); }
	    for(v=0;v<h-n;v++) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }