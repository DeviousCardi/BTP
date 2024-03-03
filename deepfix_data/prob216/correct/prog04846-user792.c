#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1) return n;
       else return fib(n-1)+fib(n-2); }
int main() {
	int n,k,ans;
	scanf("%d\n",&n);
	int a[n];
	for(k=0;k<n;k++) {
	    scanf("%d\n",&a[k]); }
	for(k=0;k<n;k++)
	{  ans=fib(a[k]);
	    printf("%d\n",ans); }
	return 0; }