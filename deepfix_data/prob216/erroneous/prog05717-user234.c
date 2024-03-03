#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    int n;
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
	int a[1000],n,i,t;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]); }
	for(i=0;i<n;i++) {
	    t=fib(int a[i]);
	    printf("%d",t); }
	return 0; }