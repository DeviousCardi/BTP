#include <stdio.h>
#include <stdlib.h>
long fib(long n);
int main() {
	int k;
	long x,f;
	scanf("%d",&k);
	while(k--) {
	    scanf("%ld",&x);
	    f=fib(x);
	    printf("%ld\n",f); }
	return 0; }
long fib(long n) {
    if(n==1||n==0)
        return 0;
    else
        return fib(n-1)+fib(n-2); }