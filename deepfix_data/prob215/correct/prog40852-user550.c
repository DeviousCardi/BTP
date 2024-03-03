#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n;
	long long int i;
	long long int sum=0;
	scanf("%lld",&n);
	for(i=1;i<n;i++) {
	    if((n%i)==0) {
	        sum=sum+i; } }
	if(sum==n)
	printf("YES");
	else
	printf("NO");
	return 0; }