#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if((n==0)||(n==1)) return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int n,i;
	scanf("%d",&n);
	int f[20];
	for(i=0;i<20;i++)
	f[i]=fib(i);
	int a[n];
	return 0; }