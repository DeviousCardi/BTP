#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&n);
	    printf("%d",fib(n)); }
	return 0; }