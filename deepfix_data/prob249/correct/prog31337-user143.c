#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, k, h;
	scanf("%d",&n);
	h=n/2;
	for(i=1;i<=n;i++,h--) {
	    if(i<=(n/2)+1) {
	        for(j=1;j<=h;j++) {
	            printf(" "); }
	        printf("*");
	        for(k=i-2;k>0;k--) {
	            printf(" "); }
	        if(i!=1) {
	            printf("*"); } }
	    printf("\n"); }
	return 0; }