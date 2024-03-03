#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	    if(i==1||i==n) {
	        printf("*"); }
	        else {
	            printf("*");
	            for(k=1;k<=i-2;k++) {
	                printf(" "); }
	            printf("*"); }
	    printf("\n"); }
	return 0; }