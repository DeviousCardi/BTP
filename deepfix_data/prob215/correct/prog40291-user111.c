#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i;
	int s=0;
	for(i=1;i<=n/2;i++) {
	    if(n%i==0)
	    s=s+i; }
	if(n==s)
	printf("Yes");
	else
	printf("No");
	return 0; }