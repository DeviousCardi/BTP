#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s=0;
	int g=n;
	scanf("%d",&n);
	for(i=2;i<=n;i++) {
	    if(n%i==0) {
	        s=s+i;
	        n=n/i; } }
	printf("%d %d",g,s);
	if(g==s)
	printf("YES");
	else
	printf("NO");
	return 0; }