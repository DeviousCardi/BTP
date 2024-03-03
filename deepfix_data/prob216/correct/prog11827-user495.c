#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    int sum=0;
    if (n==1)
    return 0;
    if (n==2)
    return 1;
    else
    return (fibo(n-1)+fibo(n-2)); }
int main() {
	int n,sum=0;
	scanf("%d",&n);
	sum=sum+fibo(n);
	printf("%d",sum);
	return 0; }