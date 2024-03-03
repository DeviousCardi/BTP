#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fib(n-1)+fib(n-2); }
int check(int n1) {
    for(i=0; i<n*n; i++) {
        a[i]=fib(i); }
    for(i=0; i<n*n; i++) {
        if(a[i]==fib(i)) {
            flag=1;
            break; } }
    if(flag==1)
    return 1;
    return 0; }
int main() {
	int t;
	scanf("%d",&t);
	printf("%d",fib(t));
	return 0; }