#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	scanf("%d",&t);
	printf("%d",fibo(t-1));
	return 0; }
int fibo(int k) {
    if(k==0)
    return 0;
    else if(k==1)
    return 1;
    else if(k<0)
    return;
    else
 {   int n;
    n=fibo(k-1)+fibo(k-2);
    return n; } }