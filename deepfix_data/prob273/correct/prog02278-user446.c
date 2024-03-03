#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,j,n,s;
	scanf("%d",&n);
	int x=(n+1)/2;
	int i=x-1;
	for( ;i>-x;i--) {
	    if(i<0)s=-i;else s=i;
	    for(j=1;j<=s;j++) {
	       printf(" "); }
	    for( ;j<x+1;j++) {
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }