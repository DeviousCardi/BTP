#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0||n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",fib(test)); }
	return 0; }