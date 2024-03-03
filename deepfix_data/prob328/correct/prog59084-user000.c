#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int t,k[20];
	scanf("%d",&t);
	int tmp=0;
    if(tmp==1)
    printf("yes");
    else
    printf("no");
	return 0; }