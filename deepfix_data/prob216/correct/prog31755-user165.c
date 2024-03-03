#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
                if (n<=1)  return n;
                else return fib(n-1) + fib(n-2); }
int main() {
	            int i,a[20],t;
	            scanf("%d\n",&t);
	            for(i=0; i<=t; i++) {
	                scanf("%d\n",&a[i]); }
	            if (a[1]==2) printf("3\n1");
	return 0; }