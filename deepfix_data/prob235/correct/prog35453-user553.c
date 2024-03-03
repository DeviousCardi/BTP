#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,l;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++) {
        for(j=i;j<(n+1)/2;j++) {
            printf(" "); }
        for(k=(n+1)/2-i+1;k<=(n+1)/2;k++) {
            printf("%d",k); }
        for(l=1;l<=i-1;l++) {
            printf("%d",(n+1)/2+l); }
        printf("\n"); }
	for(i=n/2;i>=1;i--) {
	    for(j=n/2-i;j<=0;j++) {
	        printf(" "); }
	    for(k=(n+1)/2-i+1;k<=(n+1)/2;k++) {
            printf("%d",k); } }
	return 0; }