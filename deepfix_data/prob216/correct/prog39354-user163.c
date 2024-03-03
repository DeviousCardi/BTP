#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int fib(int n) {
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int i,t,a[20];
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&a[t]);
        printf("%d\n",(a[t])); }
	return 0; }