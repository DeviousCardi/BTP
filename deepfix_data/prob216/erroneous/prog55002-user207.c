#include <stdio.h>
#include <stdlib.h>
	 int fib(int n){
	     if(n==0)
	     return 0;
	     else if(n==1)
	     return 1;
	   else
	   return fib(n-1)+fib(n-2); }
int main() {
   int i;
   scanf("%d",&n);
	fib(n);
	printf("%d",fib(n));
	return 0; }