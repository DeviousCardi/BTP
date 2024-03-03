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
    scanf("%d\n",&t);
            for(j=1;j<=t;j++) {
                scanf("%d",&a[t]);
            printf("%d",a[t]); }
	return 0; }