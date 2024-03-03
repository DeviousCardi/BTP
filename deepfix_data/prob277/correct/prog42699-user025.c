#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,p,q;
	scanf("%d",&n);
	k=(n+1)/2;
	for(i=1;i<=k;i++) {
	    for(j=1;j<=n;j++) {
	        if(j<i) {
	            printf(" "); }
	        else if(j<n-i+2) {
	            printf("*"); }
	        else break; }
	    printf("\n"); }
	for(p=k+1;p<=n;p++) {
	    for(q=1;q<=n;q++) {
	         if((n-p)>=q) {
	                printf(" "); }
	            else if(q<=p) {
	                printf("*"); }
	        else break; }
	    printf("\n"); }
	return 0; }