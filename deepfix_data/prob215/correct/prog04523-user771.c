#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n,i,count=0,sum=0;
	scanf("%lld",&n);
	long long int a[n/2];
	for(i=1;i<=n/2;i++) {
	    if(n%i==0) {
	        a[count]=i;
	        count++; } }
	for(i=0;i<count;i++) {
	    sum=a[count]+sum; }
	if(sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }