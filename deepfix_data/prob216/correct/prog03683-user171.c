#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
        if(n==1)
            return 0;
        if(n==2 || n==3)
            return 1;
        return fib(n-1)+fib(n-2); }
int main() {
    int n,t;
    scanf("%d%d",&t,&n);
    while(t--)
    printf("%d\n",fib(n));
	return 0; }