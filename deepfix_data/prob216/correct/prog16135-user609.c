#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    int sum=0;
    if(n==1) sum=1;
    else{
        sum=sum+fib(n-1); }
    return sum; }
int main() {
	int n,sum;
	scanf("%d",&n);
	sum=fib(n);
	printf("%d",sum);
	return 0; }