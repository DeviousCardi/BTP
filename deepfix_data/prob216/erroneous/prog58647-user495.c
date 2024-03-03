#include <stdio.h>
#include <stdlib.h>
int fabo(int n) {
    if (n==1)
    return 0;
    if else (n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2); }
int main() {
	int n,sum;
	scanf("%d",&n);
	sum=fibo(n);
	printf("%d"sum);
	return 0; }