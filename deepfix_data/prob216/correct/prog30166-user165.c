#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
                if (n<=1)  return n;
                else return fib(n-1) + fib(n-2); }
int main() {
	            int i,t,k,r=0;
	            scanf("%d\n",&t);
	            for(i=0; i<=t; i++) {
	                scanf("%d",&k);
	                r--;
	                printf("%d\n",fib(k)); }
	return 0; }