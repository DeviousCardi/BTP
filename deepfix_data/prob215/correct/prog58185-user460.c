#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++) {
	    if(n%i==0) {
	        s=s+i; } }
	if(n==s)
	printf("YES");
	else
	printf("NO");
	return 0; }