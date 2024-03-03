#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    {return 0;}
    else if(n==2) {
        return 1; }
    else {
        return fib(n-1)+fib(n-2); } }
int main() {
	int t,i,n;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    printf("%d\n",fib(n)); }
	return 0; }