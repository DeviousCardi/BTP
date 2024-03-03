#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,rev=0;
	scanf("%ld",&n);
	for(rev=0;rev>=n;rev++) {
	    rev=n%10;
	    rev=rev*10+rev;
        n=n/10; }
	if(n==rev) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }