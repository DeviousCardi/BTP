#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
        return fib(n-1) + fib(n-2); }
int main() {
	int t, i, arr[20];
	scanf("%d", &t);
	printf("%d", fib(t));
	return 0; }