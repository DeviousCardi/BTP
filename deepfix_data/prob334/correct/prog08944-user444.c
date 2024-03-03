#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b,i,sp,k,j,num;
	scanf("%d",&n);
	scanf("%d",&b);
	k=n;
	for(i=0;i<n;i++) {
	    k=k-1;
	for(sp=0;sp<(k);sp++) {
	    printf(" "); }
	for(j=0;j<(b-(2*k));j++) {
	    num=(i+1)%10;
	    printf("%d",num); }
	printf("\n"); }
	return 0; }