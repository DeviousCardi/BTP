#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;long s=0;
	int i;
	scanf("%ld",&n);
	for(i=1;i<=n/2+1;i++) {
	    if(n%i==0) {
	        s=s+i; } }
	if(n==s)
	printf("YES");
	else
	printf("NO");
	return 0; }