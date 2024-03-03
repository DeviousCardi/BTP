#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<=n/2;i++) {
	    if(n%i==0)
	     sum=sum+i; }
	if(sum==n)
	 printf("YES");
	else
	 printf("NO");
	return 0; }