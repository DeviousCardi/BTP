#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    if(i<(n+1)/2) {
	        for(j=(n+1)/2-i;j>=0;j--) {
	            printf(" "); }
	        for(k=1;k<=2*i-1;k+=2) {
	            printf("*\n"); } }
	    else {
	        for(j=1;i<=i-(n+1)/2;j++) {
	            printf(" "); }
	        for(k=(n+1-i)*2-1;k>=0;k-=2) {
	            printf("*\n"); } } }
	return 0; }