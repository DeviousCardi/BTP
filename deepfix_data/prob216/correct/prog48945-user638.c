#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main() {
	int t,x,f;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&x);
	    f=fib(x);
	    printf("%d\n",f); }
	return 0; }
int fib(int n) {
    if(n==1)
        return 0;
    else  if(n==2)
            return 1;
    else
        return fib(n-1)+fib(n-2); }