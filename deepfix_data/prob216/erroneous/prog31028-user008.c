#include <stdio.h>
#include <stdlib.h>
int fib(int a) {
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;<t;i++) {
	    scanf("%d",&k);
	    printf("%d",fib(k)); }
	return 0; }