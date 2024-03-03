#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<n;i++) {
	    if(n%i==0)
	    sum=sum+i; }
	if(n==sum)
	printf("YES\n");
	else
	printf("NO\n");
	return 0; }