#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int fib(int n) {
    if(n==1||n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int i,t,a[20],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++) { {
            for(j=1;j<=t;j++) {
                scanf("%d",&a[t]); }
            printf("%d",fib(a[t])); } }
	return 0; }