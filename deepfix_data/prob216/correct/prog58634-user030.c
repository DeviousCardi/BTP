#include <stdio.h>
#include <stdlib.h>
int main() {
    int k,t,i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&k);
        printf("%d\n",fib(k)); }
	return 0; }
int fib(n) {
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }