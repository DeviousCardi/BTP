#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if (n==0 || n ==1 ) return n;
    return fib(n-1) + fib(n-2); }
int main() {
       int a,b,c;
       scanf("%d",&a);
       for(b=1;b<=a;b++) {
           scanf("%d",&c);
           printf("%d\n", fib(c)); }
	return 0; }