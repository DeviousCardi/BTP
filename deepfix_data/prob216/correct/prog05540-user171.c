#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
        if(n==1)
            return 0;
        if(n==1)
            return 1;
        return fib(n)+fib(n-1); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
	return 0; }