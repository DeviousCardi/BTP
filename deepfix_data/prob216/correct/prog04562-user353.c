#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
        fib(1)==0,fib(2)==1;
        if(n==0)
        return 0;
        else if(n>2)
        return fib(n)==fib(n-1)+fib(n-2); }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k); }
	for(i=0;i<t;i++) {
	    printf("%d\n",fib(k)); }
	return 0; }