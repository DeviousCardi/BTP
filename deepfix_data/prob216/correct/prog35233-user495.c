#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    else
    return (fibo(n-1)+fibo(n-2)); }
int main() {
	int n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	scanf("%d",&t);
	t--;
	   printf("%d\n",fibo(t)); }
	return 0; }