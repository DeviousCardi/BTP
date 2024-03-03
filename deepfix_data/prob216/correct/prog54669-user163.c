#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1||n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int i,t,a[20];
	scanf("%d",&a[i]);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",a[i]); }
	printf("%d",a[i]);
	return 0; }