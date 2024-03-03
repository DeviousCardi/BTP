#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t[100],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&t[i]);
	    sum=sum+t[i]; }
	int sum1=0,alice,bob;
	for(i=0;i<n;i++) {
	   sum1=sum1+t[i];
	   if(sum1>=sum/2) {
	       alice=i;
	       bob=n-i;
	       break; } }
	printf("%d %d",alice,bob);
	return 0; }