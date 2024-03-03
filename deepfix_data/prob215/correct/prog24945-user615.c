#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s=1;
	scanf("%d",&n);
	for(i=2;i<n/2;i++) {
	    if(n%i==0)
	    s=s+i+n/i; }
	if(s==n)
	printf("YES");
	else printf("NO");
	return 0; }