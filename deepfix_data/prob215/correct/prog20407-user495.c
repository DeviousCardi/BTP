#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,a,n,sum=0,k;
	scanf("%d",&n);
	for(i=2;i<=n;i++) {
	    for(k=1;a%(i^k)!=0;k++) {
	        sum=sum+i; } }
	if(sum==n) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }