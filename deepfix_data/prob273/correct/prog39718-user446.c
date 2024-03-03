#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,j,n,k,s;
	scanf("%d",&n);
	int x=(n+1)/2;
	int i=x-1;
	for( ;i>-x;i--) {
	    if(i<0)s=-i;else s=i;
	    for(j=1;j<=s-1;j++) {
	       printf(" "); }
	    for(k=s;k<x;k++) {
	        printf("%d",k+1); }
	    printf("\n"); }
	return 0; }