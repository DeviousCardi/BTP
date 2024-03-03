#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==1)
    return 0;
    else
    if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2); }
int main() {
    int i,j,k,c=0,t;
    printf("%d",fibo(8));
	return 0; }