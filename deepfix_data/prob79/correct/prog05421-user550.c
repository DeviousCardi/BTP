#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t[100],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&t[i]);
	    sum=sum+t[i]; }
	int sum1=0,sum2=0,alice,bob;
	for(i=0;i<n;i++) {
	   sum1=sum1+t[i];
	   sum2=sum2+t[n-1-i];
	   if(sum1>=sum/2) {
	       if(sum1<=sum2)
	       alice=i+1;
	       else alice=i;
	       bob=n-alice;
	       break; } }
	printf("%d %d",alice,bob);
	return 0; }