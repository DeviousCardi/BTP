#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s=0;
	int g=n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(n%i==0) {
	        s=s+i;
	        n=n/i; } }
	if(g==s)
	printf("YES");
	else
	printf("NO");
	return 0; }