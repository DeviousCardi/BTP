#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=(n+1)/2) {
	    for(j=i;j>0;j--) {
	        printf(" "); }
	        	        printf("*"); }
	    else{if(i>(n+3)/2) {
	        for(k=1;k<=(n-1)/2;k++) {
	        printf(" "); }
	        printf("*"); } }
	    if(i!=1&&i!=n) {
	    printf("*"); }
	    printf("\n"); }
	return 0; }