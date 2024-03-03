#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==1) {
        return 0; }
    if(n==2) {
        return 1; }
    return (fibo(n)+fibo(n-1)); }
int main() {
    int n,fib,t,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        fib=fibo(n);
        printf("%d\n",fib); }
	return 0; }