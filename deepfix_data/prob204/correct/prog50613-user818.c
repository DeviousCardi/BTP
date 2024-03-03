#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,rev=0;
	scanf("%ld",&n);
	while(n>0) {
	    n=n%10;
	    rev=n*10;
	    n=n/10; }
	if(rev==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }