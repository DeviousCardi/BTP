#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==1)
    return 0;
    else if(n==0)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
	int k;int a[10];int i;
	int l,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
{	scanf("%d",&a[i]);
	l=fib( a[i]);
	printf("%d\n",l); }
	return 0; }