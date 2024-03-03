#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return (fib(n-1)+fib(n-2)); }
int main() {
	int t;int ar[20];
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++) {
	    scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",fib(ar[i])); }
	return 0; }