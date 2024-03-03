#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int i,test,n;
	scanf("%d",&test);
	for(i=1;i<=test;i++) {
	    scanf("%d\n",&n); }
	for(i=1;i<=test;i++) {
	    printf("%d\n",fib(n)); }
	return 0; }