#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
                if (n<=1)  return n;
                else return fib(n-1) + fib(n-2); }
int main() {
	            int i,a[20],t;
	            scanf("%d",&t);
	            for(i=0; i<=t; i++) {
	                scanf("%d",&a[i]); }
	return 0; }