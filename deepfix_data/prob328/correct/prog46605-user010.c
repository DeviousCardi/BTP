#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
    int i=0,k,t;
    scanf("%d\n",&t);
    for(k=0;k<t;k++) {
        scanf("%d\n",&k); {
        if (fib(i)==k)
        printf("yes\n");
        else
        printf("no\n"); }
        i++; }
	return 0; }