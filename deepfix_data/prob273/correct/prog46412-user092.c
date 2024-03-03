#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int k,i,j,l;
	k=(h+1)/2;
	for(i=k;i>=1;i--) {
	    for(j=i;j<=k;j++) {
	        for(l=k-1;l>=0;l--) {
	            printf(" "); }
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }