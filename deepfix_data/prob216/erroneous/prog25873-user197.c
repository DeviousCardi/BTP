#include <stdio.h>
#include <stdlib.h>
int fib(int n-1) {
 if(n<=1)
 return n;
 else
 return
 fib(n-1)+fib(n-2); }
int main() {
	int n,i;
	int a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<n;i++) {
	    printf("%d\n",fib(a[i])); }
	return 0; }