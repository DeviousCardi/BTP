#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i=i+1) {
	    for(j=1;j<=n;j=j+1) {
	        if(j>=i&&j<=n+1-i)
	        printf("*");
	        else
	        printf(" "); }
	printf("\n"); }
	for(i=(n+3)/2;i<=n;i=i+1) {
	    for(j=1;j<=n;j=j+1) {
	        if(j>=n+1-i&&j<i+1)
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }