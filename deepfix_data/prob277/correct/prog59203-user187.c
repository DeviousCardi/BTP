#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l;
	scanf("%d",&n);
	int b=n;
	int a=n;
	for(i=0;i<(n+1)/2;i++) {
	            for(k=0;k<i;k++) {
	                     printf(" "); }
	        for(j=b;j>0;j--) {
	               printf("*"); }
	            printf("\n");
	       b=b-2; }
	    b=3;
	    for(i=0;i<(n+1)/2;i++) {
	            for(k=0;k<(a-1)/2;k++) {
	                     printf(" "); }
	            a=a-2;
	        for(j=b;j>0;j--) {
	               printf("*"); }
	            printf("\n");
	       b=b+2; }
	return 0; }