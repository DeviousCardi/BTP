#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int A[50],B[50],i,t,j;
 printf("%d",fib(9));
	return 0; }