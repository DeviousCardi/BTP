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
    int i,c;
    for(c=0;c<10;c++) {
        printf("%d\n",fib(i));
        i++; }
	return 0; }