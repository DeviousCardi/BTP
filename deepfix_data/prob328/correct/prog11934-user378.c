#include <stdio.h>
#include <stdlib.h>
int fib (int n) {
    int count=0;
    if (n<=0)
    return n;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
	int t;
	scanf ("%d",&t);
	int i,k[t];
	for (i=0;i<=t;i++) {
	    scanf ("%d\n",&k[i]); }
	for (i=0;i<t;i++) {
	    if (fib(k[i])==(fib(k[i-1])+fib(k[i-2])))
	    printf ("yes\n");
	    else
	    printf ("no\n"); }
	return 0; }