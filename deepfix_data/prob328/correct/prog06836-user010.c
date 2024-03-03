#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
    int i;
    for(i=0;i<20;i++) {
        printf("%d",fib(i));
        i++; }
	return 0; }