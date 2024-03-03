#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fib(n-1)+fib(n-2); }
int check(int n) {
    int i, flag=0;
    for(i=0; i<n*n; i++) {
        if(fib(i)==n) {
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