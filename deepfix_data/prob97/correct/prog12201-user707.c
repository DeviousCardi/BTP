#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l;
	scanf("%d",&n);
	for(i=0;i<=n;i=i+1) {
	    for(j=1;j<=(n-i);j=j+1) {
	        printf(" "); }
	    for(k=n-i+1;k<=(n+i-1);k=k+1) {
	        printf("k"); }
	    for(l=n+i;l<=(2*n-i);l=l+1) {
	        printf(" "); }
	    printf("\n"); }
	 return 0; }