#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	l=(n+1)/2;
	k=l;
	for(int i=0;i<l;i++) {
	    k=k-1;
	for(sp=0;sp<k;sp++) {
	    printf(" "); }
	for(j=sp+1;j<=l;j++) {
	    int num=j%10;
	    printf("%d",num); }
	return 0; }