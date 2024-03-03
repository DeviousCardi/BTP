#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	int m=(n+1)/2;
	int t=(n-1)/2;
	for(i=1;i<=m;i++) {
	    for(j=1;j<=m-i;j++) {
	        printf(" "); }
	    for(k=1;k<=2*i-1;k++) {
	        printf("*"); }
	    printf("\n"); }
	for(i=t;i>=1;i--) {
	    for(j=1;j<=t-i+1;j++){
	        printf(" "); }
	    for(k=1;k<=2*i-1;k++) {
	        printf("*"); }
	    printf("\n"); }
	return 0; }