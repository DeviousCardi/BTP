#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,k,n,m;
	scanf("%d",&h);
	for(i=h; i>=1; i=i-2) {
	    for(j=2;j<=h-i+1;j=j+2)
	        printf(" ");
	    for(j=1; j<=i; j=j+1)
	        printf("*");
	    printf("\n"); }
	for(k=1; k<=(h-2); k=k+2) {
	    for(n=1;n<(k-h+2); n++)
	        printf(" ");
	    for(m=1; m<=k+2; m=m+1)
	        printf("*");
	    printf("\n"); }
	return 0; }