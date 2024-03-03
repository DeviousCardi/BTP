#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,a,b;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    if(i<=((n+1/2))) {
	        for(j=1;j<=i-1;j++) {
	            printf(" "); }
	        for(k=1;k<=n+2-2*i;k++) {
	            printf("x"); } }
	    else {
	        for(a=1;a<=n-i;a++) {
	            printf(" "); }
	        for(b=i;b>n-i;b=b-1) {
	            printf("x"); } }
	    printf("\n"); }
	return 0; }