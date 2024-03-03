#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
    int count,i,n;
    scanf("%d",&n);
    for(i=0;i<=20;i++) {
        if(n==fib(i))
            printf("yes"); }
	return 0; }
int fib(int num) {
    if (num<=20) {
        if (num==1|| num==0)
        return 0;
        else
        return ( fib(n-1) + fib(n-2) ); } }