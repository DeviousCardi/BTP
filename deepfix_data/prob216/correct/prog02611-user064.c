#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=0) {
        return 0; }
    else if(n==1)
        return 1;
    else
        return (fib(n-1) + fib(n-2)); }
int main() {
	int i,t,x;
	scanf("%d", &t);
	int k[t];
	for(i=0;i<t;i++) {
	    scanf("%d", &k[i]); }
	for(i=0;i<t;i++) {
	    x = fib(k[i]-2);
	    printf("%d\n", x); }
	return 0; }