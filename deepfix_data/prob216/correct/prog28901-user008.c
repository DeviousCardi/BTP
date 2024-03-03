#include <stdio.h>
#include <stdlib.h>
int fib(int a) {
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    return fib(a-1)+fib(a-2); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",fib(k-1)); }
	return 0; }