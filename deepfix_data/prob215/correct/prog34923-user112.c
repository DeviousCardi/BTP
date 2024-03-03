#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,i;
	scanf("%ld",&n);
	long int sum=0;
	for(i=1;i<=n/2;i++) {
	    if(n%i==0)
	     sum=sum+i; }
	if(sum==n)
	 printf("YES");
	else
	 printf("NO");
	return 0; }