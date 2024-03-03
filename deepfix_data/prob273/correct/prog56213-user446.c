#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,j,n,k,s;
	scanf("%d",&n);
	int x=(n+1)/2;
	int i=x-1;
	for( ;i>-x;i--) {
	    if(i<0)s=-i;else s=i;
	    for(j=1;j<=s;j++) {
	       printf(" "); }
	    for(k=s+1;k<x+1;k++) {
	        printf("%d",k); }
	    printf("\n"); }
	return 0; }