#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fibo(n-1)+fibo(n-2); }
int main() {
	int t,n;
	scanf("%d ",&t);
	while(t--){
	scanf("%d", &n);
	printf("%d\n", fibo(n)); }
	return 0; }