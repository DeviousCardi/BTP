#include <stdio.h>
#include <stdlib.h>
int main() {
    long n,i,s=0;
	scanf("%ld",&n);
	for(i=1;i<=n/2;i++) {
	    if(n%i==0)
	    s=s+i; }
	if(s==n)
	printf("YES");
	else
	printf("NO");
	return 0; }