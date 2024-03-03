#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    int sum=0;
    if(n==1) sum=1;
    else{
        sum=fib(n-2)+fib(n-1); }
    return sum; }
int main() {
	int i,t,n,sum;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&n);
	sum=fib(n);
	printf("%d\n",sum); }
	return 0; }