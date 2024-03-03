#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,sum,i;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	    if(n%i==0) {
	    sum=sum+i; }
	    else
	    continue; }
	if(sum==n)
	printf("Yes");
	else
	printf("No");
	return 0; }