#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int t,k;
	int i;
	scanf("%d", &t);
	for(i=0;i<t;i++) {
	    scanf("%d\n", &k);
	    printf("%d\n", fib(k));
	    scanf("%d\n", &k); }
	return 0; }