#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1) return 0;
    else if(n==2){return 1;}
       else return fib(n-1)+fib(n-2); }
int main() {
	int n,k;
	scanf("%d\n",&n);
	int a[n];
	for(k=0;k<n;k++) {
	    scanf("%d\n",&a[k]); }
	for(k=0;k<n;k++)
	{  ans=fib(k;)
	    printf("%d",ans); }
	return 0; }