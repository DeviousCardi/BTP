#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
        int x;
        if(n==0)
        return 0;
        else if(n==1)
        return 0;
        else if(n==2)
        return 1;
        else if(n>2) {
        fib(n)==fib(n-1)+fib(n-2);
        x=fib(n);
        return x; } }
int main() {
	int a[20],i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",fib(a[i])); }
	return 0; }