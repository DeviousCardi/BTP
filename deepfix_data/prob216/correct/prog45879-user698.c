#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{ if(n==1)
    return 0;
  else if(n==2)
    return 1;
  else if(n==3)
    return 1;
else return fib(n-1)+n-4; }
int main() {
	 printf("%d",fib(7));
	return 0; }