#include <stdio.h>
#include <stdlib.h>
int main() {
	int b,h,i,j,n;
	scanf("%d",&h);
	scanf("%d",&b);
	for(i=1;i<=h;i++) {
	    for(j=i;j<=b-2*(5-i);j=j+2) {
	        n=j%10;
	        printf("%d",n); }
	    printf("\n"); }
	return 0; }