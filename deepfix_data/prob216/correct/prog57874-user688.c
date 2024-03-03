#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-2)+fib(n-1); }
int main() {
	int t, i;
	scanf("%d", &t);
	int x;
	for(i=0; i<t; i++){
	    scanf("%d", &x);
	    printf("%d\n", fib(x-1)); }
	return 0; }