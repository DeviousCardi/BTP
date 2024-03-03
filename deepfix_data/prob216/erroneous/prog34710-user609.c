#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    sum=0;
    if(n==1) fib(n)=1;
    else{
        sum=sum+fib(n-1); }
    return sum; }
int main() {
	int i,t,n,sum;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&n);
	sum=fib(n);
	printf("%d\n",sum); }
	return 0; }