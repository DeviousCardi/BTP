#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int k,i,j,l;
	k=(h+1)/2;
	for(i=k;i>=1;i--) {
	    printf(" ");
	    for(j=i;j<=k;j++) {
	        for(l=i-1;l>=0;l--) {
	            printf("%d",j%10); } }
	    printf("\n"); }
	return 0; }