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
    int i=0,k,c,t;
    scanf("%d\n",&t);
    for(c=0;c<t;c++) {
        scanf("%d\n",&k); {
        if (k==fib(i))
        printf("yes\n");
        break;
        i++; }
        if(c==t)
        printf("no\n"); }
	return 0; }